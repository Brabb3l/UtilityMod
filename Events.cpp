#include "stdafx.h"

#include "Events.h"

#include <other/CommandParser.h>
#include <other/CommandSystem.h>

#include "Util.h"
#include "Global.h"
#include "ExampleMod.h"

#include "sdk/SDK.hpp"

void Events::GetMessage(SML::ModReturns* returns, void* player, std::string message) {
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

void Events::OnKeyInput(SML::ModReturns* returns, void* input, void* key, void* event, float amountDepressed, bool gamepad) {
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

void Events::OnTakeDamage(SML::ModReturns* returns, void* healthComponent, void* damagedActor, float damageAmount, void* damageType, void* instigatedBy, void* damageCauser) {
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
	if (CommandStates::godMode) {
		returns->UseOriginalFunction = false;
		return;
	}

	// Ignore fall damage while flying
	if (CommandStates::isFlying) {
		if (type.GetName() == "Default__DamageType_FallDamage_C") {
			returns->UseOriginalFunction = false;
			return;
		}
	}
}

void Events::WorldInit(SML::ModReturns* returns, void* controller) {
	Global::InitializeGlobals();

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

				foundFonts.insert({ fontName, (UFont*)object });
			}

			// Get Item classes
			if (object->Class->GetName() == "BlueprintGeneratedClass") {
				std::string name = object->GetName();

				if (Util::startsWith(name, "Desc_")) {
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

	Global::fonts = foundFonts;
	Global::items = foundItems;
}

// WIP
/*
void Events::OnDrawHUD(SML::ModReturns* returns, void* hudptr) {
	if (fonts.size() < 1)
		return;

	AHUD* hud = (AHUD*)hudptr;

	hud->DrawRect(FLinearColor(0, 0, 0, 0), 0, 200, 200, 300);
	hud->DrawLine(20, 250, 180, 250, FLinearColor(1, 1, 1, 1), 2);
	hud->DrawText(FString(L"Some title"), FLinearColor(1, 1, 1, 1), 40, 220, fonts.at("FactoryFont"), 1, false);
}
*/

void Events::WireConnect(SML::ModReturns* returns, void* buildable, void* node) {
	if (node == nullptr)
		returns->UseOriginalFunction = false;
}

void Events::BuildableSetResourceNode(SML::ModReturns* returns, void* buildable, void* node) {
	if (node == nullptr)
		returns->UseOriginalFunction = false;
}

void Events::ResourceNodeIsOccupied(SML::ModReturns* returns, void* node) {
	if (CommandStates::ignoreBuildRestriction)
		((AFGResourceNode*)node)->mIsOccupied = false;
}

void Events::CanConstructHologram(SML::ModReturns* returns, void* hologram) {
	returns->ReturnValue = &CommandStates::ignoreBuildRestriction;
	returns->UseOriginalFunction = !CommandStates::ignoreBuildRestriction;
}

void Events::Tick(SML::ModReturns* returns, void* world, void* TickType, float DeltaSeconds) {
	bool isFocused = GetForegroundWindow() == ::GetActiveWindow();

	if (CommandStates::isFlying) {
		if (Global::m_LocalPlayer->PlayerController != nullptr && Global::m_LocalPlayer->PlayerController->Character != nullptr) {
			auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

			if (!character->CharacterMovement->IsFlying()) // Reenable flymode if player dies
				character->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying, 0);

			if (isFocused) {
				bool speed = GetAsyncKeyState(Config::speedkey);

				bool down = GetAsyncKeyState(Config::downkey);
				bool up = GetAsyncKeyState(Config::upkey);

				bool forward = GetAsyncKeyState(Config::forwardkey);
				bool backward = GetAsyncKeyState(Config::backwardkey);
				bool right = GetAsyncKeyState(Config::rightkey);
				bool left = GetAsyncKeyState(Config::leftkey);

				if (down || up || forward || backward || right || left) {
					auto controller = static_cast<AFGPlayerController*>(Global::m_LocalPlayer->PlayerController);

					FRotator CameraRotation = controller->PlayerCameraManager->GetCameraRotation();
					FVector MoveVector = FVector();

					// Movement logic
					if (forward || backward || right || left) {
						if (forward && !backward) {
							int additional = (right ? 45 : 0) + (left ? -45 : 0);

							MoveVector = Util::AngleToDirectionalVector(CameraRotation.Yaw + additional);
						}
						else if (backward && !forward) {
							int additional = (right ? -45 : 0) + (left ? 45 : 0);

							MoveVector = Util::AngleToDirectionalVector(CameraRotation.Yaw + 180 + additional);
						}
						else if ((backward && forward) || (!backward && !forward)) {
							MoveVector = Util::AngleToDirectionalVector(CameraRotation.Yaw + (right ? 90 : 0) + (left ? -90 : 0));
						}
					}

					// Set up and down movement
					MoveVector.Z = (up ? 1 : 0) + (down ? -1 : 0);

					// Multiply the MoveVector
					MoveVector.X *= 1000 * (speed ? Config::flyspeedmodemultiplier : 1) * CommandStates::flySpeed * Config::baseflyspeed;
					MoveVector.Y *= 1000 * (speed ? Config::flyspeedmodemultiplier : 1) * CommandStates::flySpeed * Config::baseflyspeed;
					MoveVector.Z *= 1000 * (speed ? Config::flyspeedmodemultiplier : 1) * CommandStates::flySpeed * Config::baseflyspeed;

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