#include <stdafx.h>
#include <utility/Configuration.h>
#include <other/CommandSystem.h>
#include <events/PlayerEvents.h>
#include <other/CommandSystem.h>
#include <other/CommandParser.h>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <thread>

#include "ExampleMod.h"
#include "ModReturns.h"
#include "Internals.h"
#include "sdk/SDK.hpp"

#define PI 3.14159265358979323846
#define RADIAN (PI / 180)

using event = SML::HookLoader::Event;
using namespace SDK;

ExampleMod* mod;
SML::CommandSystem commandSystem;
SML::Configuration config("UtilityMod");

int flyHotkey, forwardkey, backwardkey, leftkey, rightkey, upkey, downkey, speedkey; // keycodes
double flyspeedmodemultiplier, baseflyspeed;
float flySpeed = 1;

std::map<std::string, UBlueprintGeneratedClass*> itemsMap;
std::map<std::string, UFont*> fonts;

// Custom character states
bool isFlying = false;
bool godMode = false;
bool creativeMode = false;

bool unlockAllSchematicsConfirmation = false;

UFont* OrbitronFont;

/// Globals

namespace Global {
	DWORD_PTR BaseAddress;
	UWorld** m_UWorld;
	ULevel* m_persistentLevel;
	UGameInstance* m_owningGameInstance;
	TArray<ULocalPlayer*> LocalPlayers;
	ULocalPlayer* m_LocalPlayer;
	TArray<AActor*>* m_Actors;
	FVector2D ViewportSize;
	AActor* currentPlayer;
}

void InitializeGlobals() {
	if ((*Global::m_UWorld) == nullptr) {
		SML::mod_warning(mod->Name(), "World not found!");
		return;
	}

	Global::m_persistentLevel = (*Global::m_UWorld)->PersistentLevel;
	Global::m_owningGameInstance = (*Global::m_UWorld)->OwningGameInstance;
	Global::LocalPlayers = Global::m_owningGameInstance->LocalPlayers;
	Global::m_LocalPlayer = Global::LocalPlayers[0];
	Global::m_Actors = &Global::m_persistentLevel->AActors;
}

/// Utility

bool startsWith(const std::string& str, const std::string& start) {
	if (&start == &str) return true;
	if (start.length() > str.length()) return false;
	for (size_t i = 0; i < start.length(); ++i) {
		if (start[i] != str[i]) return false;
	}
	return true;
}

bool is_number(const std::string& s) {
	std::string::const_iterator it = s.begin();
	while (it != s.end() && isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

bool is_float(const std::string &in) {
	std::stringstream sstr(in);
	float f;
	return !((sstr >> std::noskipws >> f).rdstate() ^ std::ios_base::eofbit);
}

void sendMessage(std::wstring msg) {
	static_cast<AFGPlayerController*>(Global::m_LocalPlayer->PlayerController)->EnterChatMessage(FString(msg.c_str()));
}

// Convert an angle to a vector
FVector AngleToDirectionalVector(double angle) {
	FVector vector = FVector();

	vector.X = cos(angle * RADIAN);
	vector.Y = sin(angle * RADIAN);

	return vector;
}

// Get key code by name/character
int GetKey(const std::string& key) {
	if (key.length() == 1) {
		int keyCode = key[0];

		if (keyCode >= '0' && keyCode <= '9' || keyCode >= 'A' && keyCode <= 'Z') {
			return keyCode;
		}
		else if (keyCode >= 'a' && keyCode <= 'z') {
			return 'A' + ('a' - keyCode);
		}
	}
	else {
		if (key == "UP") {
			return VK_UP;
		}
		if (key == "DOWN") {
			return VK_DOWN;
		}
		if (key == "LEFT") {
			return VK_LEFT;
		}
		if (key == "RIGHT") {
			return VK_RIGHT;
		}
		if (key == "SHIFT") {
			return VK_LSHIFT;
		}
		if (key == "CONTROL") {
			return VK_LCONTROL;
		}
		if (key == "SPACE") {
			return VK_SPACE;
		}
		if (key == "TAB") {
			return VK_TAB;
		}
		if (key == "ALT") {
			return VK_LMENU;
		}
	}

	SML::mod_warning(mod->Name(), "Unable to find key '" + key + "'");

	return 0;
}

/// Events

void GetMessage(SML::ModReturns* returns, void* player, std::string message) {
	if (message.length() <= 1)
		return;

	SML::CommandParser::CommandData data = SML::CommandParser::Parse(message);
	SML::Command command = commandSystem.get_command(data.Command);

	if (!command.Empty) {
		SML::mod_info(mod->Name(), "Invoking Command: ", data.Command);

		command.Invoke(player, data);

		returns->UseOriginalFunction = false;
	}
	else {
		SML::mod_info(mod->Name(), "Invalid Command: ", data.Command);
	}
}

void OnKeyInput(SML::ModReturns* returns, void* input, void* key, void* event, float amountDepressed, bool gamepad) {
	// TODO: Check if the chat is not focused

	/*if (GetAsyncKeyState(flyHotkey) & 0x8000) {
		auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

		if (isFlying) {
			character->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking, 0);
			sendMessage(L"Fly-Mode disabled");
			SML::mod_info(mod->Name(), "Walk Mode");
		}
		else {
			character->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying, 0);
			sendMessage(L"Fly-Mode enabled");
			SML::mod_info(mod->Name(), "Fly Mode");
		}

		isFlying = !isFlying;
	}*/
}

void OnTakeDamage(SML::ModReturns* returns, void* healthComponent, void* damagedActor, float damageAmount, void* damageType, void* instigatedBy, void* damageCauser) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	// Check if the damaged Health Component belongs to the player 
	size_t characterHCAddress = (size_t)static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character)->mHealthComponent;
	size_t victimHCAddress = (size_t)healthComponent;

	if (characterHCAddress != victimHCAddress)
		return;

	UDamageType type = *(UDamageType*)damageType;

	//SML::mod_info(mod->Name(), "Detected Damage: ", type.GetName()); // Log damage type

	// God Mode
	if (godMode) {
		returns->UseOriginalFunction = false;
		return;
	}

	// Ignore fall damage while flying
	if (isFlying) {
		if (type.GetName() == "Default__DamageType_FallDamage_C") {
			returns->UseOriginalFunction = false;
			return;
		}
	}
}

void WorldInit(SML::ModReturns* returns, void* controller) {
	InitializeGlobals();

	// Cache global objects

	std::map<std::string, UBlueprintGeneratedClass*> foundItems;
	std::map<std::string, UFont*> foundFonts;

	SML::mod_info(mod->Name(), "Caching global objects...");

	auto gObjects = UObject::GetGlobalObjects();
	int num = gObjects.Num();

	for (int i = 0; i < num; i++) {
		auto objectItem = gObjects.GetByIndex(i);

		if (objectItem.Object != nullptr) {
			auto object = objectItem.Object;

			if (object->Class->GetName() == "Font") {
				std::string fontName = object->GetName();

				foundFonts.insert({fontName, (UFont*) object});
			}

			// Get Item classes
			if (object->Class->GetName() == "BlueprintGeneratedClass") {
				std::string name = object->GetName();

				if (startsWith(name, "Desc_")) {
					std::string itemName = object->GetName().substr(5);

					foundItems.insert({ itemName, (UBlueprintGeneratedClass*)object });

					SML::mod_info(mod->Name(), "Found item: " + itemName);
				}
			}
		}
	}

	SML::mod_info(mod->Name(), "Total Fonts: ", foundFonts.size());
	SML::mod_info(mod->Name(), "Total Items: ", foundItems.size());
	SML::mod_info(mod->Name(), "Total GObjects: ", num);
	SML::mod_info(mod->Name(), "Caching complete!");

	fonts = foundFonts;
	itemsMap = foundItems;
}

// WIP
/*
void OnDrawHUD(SML::ModReturns* returns, void* hudptr) {
	if (fonts.size() < 1)
		return;

	AHUD* hud = (AHUD*)hudptr;

	hud->DrawRect(FLinearColor(0, 0, 0, 0), 0, 200, 200, 300);
	hud->DrawLine(20, 250, 180, 250, FLinearColor(1, 1, 1, 1), 2);
	hud->DrawText(FString(L"Some title"), FLinearColor(1, 1, 1, 1), 40, 220, fonts.at("FactoryFont"), 1, false);
}
*/

/// Item helper functions

FInventoryStack MakeItemStack(const std::string& itemname, const int& amount) {
	FInventoryStack stack = FInventoryStack();
	FInventoryItem item = FInventoryItem();

	item.ItemClass = itemsMap.at(itemname);

	stack.Item = item;
	stack.NumItems = amount;

	return stack;
}

/// Commands

void UnlockAllSchematics(void* player, SML::CommandParser::CommandData data) {
	if (!unlockAllSchematicsConfirmation) {
		sendMessage(L"You cannot undo this action! Type '/unlockall' to confirm it");

		unlockAllSchematicsConfirmation = true;
		return;
	}

	AFGGameState* gamestate = static_cast<AFGGameState*>((*Global::m_UWorld)->GameState);

	auto phaseManager = gamestate->mGamePhaseManager;
	auto phases = phaseManager->mGamePhaseTierInfo;

	for (size_t i = 0; i < phases.Num(); i++)
		phaseManager->SetGamePhase(phases[i].gamePhase);

	auto schematicManager = gamestate->mSchematicManager;
	auto schematics = schematicManager->mAllSchematics;
	
	for (size_t i = 0; i < schematics.Num(); i++)
		if (!schematicManager->IsSchematicPurchased(schematics[i]))
			schematicManager->GiveAccessToSchematic(schematics[i], true);

	sendMessage(L"All schematics/phases are now unlocked!");
}

void Creative(void* player, SML::CommandParser::CommandData data) {
	AFGGameState* gamestate = static_cast<AFGGameState*>((*Global::m_UWorld)->GameState);

	if (creativeMode) {
		gamestate->SetCheatNoCost(false);
		gamestate->SetCheatNoPower(false);

		sendMessage(L"Creative-Mode disabled!");
	}
	else {
		gamestate->SetCheatNoCost(true);
		gamestate->SetCheatNoPower(true);

		sendMessage(L"Creative-Mode enabled!");
	}

	creativeMode = !creativeMode;
}

void SetTimeDilation(void* player, SML::CommandParser::CommandData data) {
	if (data.Args.size() < 1) {
		sendMessage(L"Use /settimedilation <dilation>");
		return;
	}
		
	if (!is_float(data.Args[0])) {
		sendMessage(L"dilation must be a number");
		return;
	}

	float dilation = data.get_float(0);

	if (dilation <= 0) {
		sendMessage(L"dilation must be greater than 0");
		return;
	}

	Global::m_persistentLevel->WorldSettings->TimeDilation = dilation;
	sendMessage(L"Time dilation set!");
}

void GiveItem(void* player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

	if (data.Args.size() < 2) {
		sendMessage(L"Use /give <itemname> <amount>");
		return;
	}

	if (itemsMap.find(data.get_string(0)) == itemsMap.end()) {
		sendMessage(L"This Item does not exist.");
		return;
	}

	if (!is_number(data.Args[1])) {
		sendMessage(L"amount must be a number");
		return;
	}

	FInventoryStack stack = MakeItemStack(data.get_string(0), data.get_int(1));

	character->GetInventory()->AddStack(stack, true);
}

void Fly(void* player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

	if (isFlying) {
		character->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking, 0);
		sendMessage(L"Fly-Mode disabled");
	}
	else {
		character->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying, 0);
		sendMessage(L"Fly-Mode enabled");
	}

	isFlying = !isFlying;
}

void FlySpeed(void* player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	if (data.Args.size() < 1) {
		sendMessage(L"Use /flyspeed <speed>");
		return;
	}

	try {
		if (is_float(data.Args[0])) {
			flySpeed = data.get_float(0);

			std::string newspeed = data.get_string(0);

			sendMessage(L"Fly speed set to " + std::wstring(newspeed.begin(), newspeed.end()));
		}
		else {
			sendMessage(L"Speed must be a number");
		}
	}
	catch (const std::out_of_range& ex) {
		sendMessage(L"Speed must be a valid number");
	}
}

void God(void* player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

	if (godMode) {
		sendMessage(L"God-Mode disabled");
	}
	else {
		sendMessage(L"God-Mode enabled");
	}

	godMode = !godMode;
}

void Help(void* player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	sendMessage(L"/give <item> <amount>    (WIP)");
	sendMessage(L"/fly");
	sendMessage(L"/flyspeed <speed>");
	sendMessage(L"/god");
	sendMessage(L"/settimedilation <dilation>");
	sendMessage(L"/creative");
	sendMessage(L"/unlockall");
}

/// World Tick

void Tick(SML::ModReturns* returns, void* world, void* TickType, float DeltaSeconds) {
	bool isFocused = GetForegroundWindow() == ::GetActiveWindow();

	if (isFlying) {
		if (Global::m_LocalPlayer->PlayerController != nullptr && Global::m_LocalPlayer->PlayerController->Character != nullptr) {
			auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

			if (!character->CharacterMovement->IsFlying()) // Reenable flymode if player dies
				character->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying, 0);

			if (isFocused) {
				bool speed = GetAsyncKeyState(speedkey);

				bool down = GetAsyncKeyState(downkey);
				bool up = GetAsyncKeyState(upkey);

				bool forward = GetAsyncKeyState(forwardkey);
				bool backward = GetAsyncKeyState(backwardkey);
				bool right = GetAsyncKeyState(rightkey);
				bool left = GetAsyncKeyState(leftkey);

				if (down || up || forward || backward || right || left) {
					auto controller = static_cast<AFGPlayerController*>(Global::m_LocalPlayer->PlayerController);

					FRotator CameraRotation = controller->PlayerCameraManager->GetCameraRotation();
					FVector MoveVector = FVector();

					// Movement logic
					if (forward || backward || right || left) {
						if (forward && !backward) {
							int additional = (right ? 45 : 0) + (left ? -45 : 0);

							MoveVector = AngleToDirectionalVector(CameraRotation.Yaw + additional);
						}
						else if (backward && !forward) {
							int additional = (right ? -45 : 0) + (left ? 45 : 0);

							MoveVector = AngleToDirectionalVector(CameraRotation.Yaw + 180 + additional);
						}
						else if ((backward && forward) || (!backward && !forward)) {
							MoveVector = AngleToDirectionalVector(CameraRotation.Yaw + (right ? 90 : 0) + (left ? -90 : 0));
						}
					}

					// Set up and down movement
					MoveVector.Z = (up ? 1 : 0) + (down ? -1 : 0);

					// Multiply the MoveVector
					MoveVector.X *= 1000 * (speed ? flyspeedmodemultiplier : 1) * flySpeed * baseflyspeed;
					MoveVector.Y *= 1000 * (speed ? flyspeedmodemultiplier : 1) * flySpeed * baseflyspeed;
					MoveVector.Z *= 1000 * (speed ? flyspeedmodemultiplier : 1) * flySpeed * baseflyspeed;

					character->GetMovementComponent()->Velocity = MoveVector; // Apply velocity
				}
				else {
					// decelerate character to 0
					character->GetMovementComponent()->Velocity = FVector();
				}
			}
		}
	}
}

/// SML Stuff and Mod Init

void ExampleMod::Setup() {
	mod = this;

	SML::mod_info(mod->Name(), "Initializing mod...");

	config.load();

	// Set config defaults
	config.set("Fly_Hotkey", "H");
	config.set("Fly_Forward_Key", "W");
	config.set("Fly_Backward_Key", "S");
	config.set("Fly_Right_Key", "D");
	config.set("Fly_Left_Key", "A");
	config.set("Fly_Up_Key", "SPACE");
	config.set("Fly_Down_Key", "CONTROL");
	config.set("Fly_Speed_Mode_Key", "SHIFT");
	config.set("Fly_Speed_Mode_Multiplier", 3.0);
	config.set("Fly_Base_Speed", 1.0);

	// Apply changes to config
	config.save();
	config.load();

	SML::mod_info(mod->Name(), "Loading Config...");

	flyHotkey = GetKey(config.get("Fly_Hotkey", (std::string)"H"));
	forwardkey = GetKey(config.get("Fly_Forward_Key", (std::string)"W"));
	backwardkey = GetKey(config.get("Fly_Backward_Key", (std::string)"S"));
	rightkey = GetKey(config.get("Fly_Right_Key", (std::string)"D"));
	leftkey = GetKey(config.get("Fly_Left_Key", (std::string)"A"));
	upkey = GetKey(config.get("Fly_Up_Key", (std::string)"SPACE"));
	downkey = GetKey(config.get("Fly_Down_Key", (std::string)"CONTROL"));
	speedkey = GetKey(config.get("Fly_Speed_Mode_Key", (std::string)"SHIFT"));
	flyspeedmodemultiplier = config.get("Fly_Speed_Mode_Multiplier", 3.0);
	baseflyspeed = config.get("Fly_Base_Speed", 1.0);

	// Subscribe to events
	SML::mod_info(mod->Name(), "Subscribing to events...");

	_dispatcher.subscribe(SML::HookLoader::Event::AFGCharacterPlayerBeginPlay, WorldInit);
	_dispatcher.subscribe(SML::HookLoader::Event::AFGPlayerControllerEnterChatMessage, GetMessage);
	_dispatcher.subscribe(SML::HookLoader::Event::WorldTick, Tick);
	_dispatcher.subscribe(SML::HookLoader::Event::UFGHealthComponentTakeDamage, OnTakeDamage);
	_dispatcher.subscribe(SML::HookLoader::Event::UPlayerInputInputKey, OnKeyInput);
	//_dispatcher.subscribe(SML::HookLoader::Event::DrawHUD, OnDrawHUD);

	// SDK Init
	SML::mod_info(mod->Name(), "Initializing the sdk...");

	Global::BaseAddress = (DWORD_PTR)GetModuleHandle(nullptr);

	auto btAddrUWorld = Global::BaseAddress + 0x2BA6FC;
	auto btOffUWorld = *reinterpret_cast<uint32_t*>(btAddrUWorld + 3);
	Global::m_UWorld = reinterpret_cast<UWorld**>(btAddrUWorld + 7 + btOffUWorld);

	auto btAddrGObj = Global::BaseAddress + 0xE1434;
	auto btOffGObj = *reinterpret_cast<uint32_t*>(btAddrGObj + 3);
	UObject::GObjects = reinterpret_cast<FUObjectArray*>(btAddrGObj + 7 + btOffGObj);

	auto btAddrGName = Global::BaseAddress + 0xAC3434;
	auto btOffGName = *reinterpret_cast<uint32_t*>(btAddrGName + 3);
	FName::GNames = *reinterpret_cast<TNameEntryArray**>(btAddrGName + 7 + btOffGName);

	// Register commands
	SML::mod_info(mod->Name(), "Registering commands...");

	commandSystem.RegisterCommand("give", GiveItem);
	commandSystem.RegisterCommand("fly", Fly);
	commandSystem.RegisterCommand("flyspeed", FlySpeed);
	commandSystem.RegisterCommand("god", God);
	commandSystem.RegisterCommand("help", Help);
	commandSystem.RegisterCommand("settimedilation", SetTimeDilation);
	commandSystem.RegisterCommand("creative", Creative);
	commandSystem.RegisterCommand("unlockall", UnlockAllSchematics);

	SML::mod_info(mod->Name(), "Initializing complete!");
}

void ExampleMod::Cleanup() {
	// hi
}