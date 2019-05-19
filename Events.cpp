#include "stdafx.h"

#include "Events.h"

#include <Psapi.h>

#include <other/CommandParser.h>
#include <other/CommandSystem.h>
#include <events/PlayerEvents.h>

#include "Util.h"
#include "Global.h"
#include "ExampleMod.h"

#include "sdk/SDK.hpp"

void Events::GetMessage(SML::ModReturns* returns, void* player, std::string message) {
	if (message.length() <= 1)
		return;

	SML::CommandParser::CommandData data = SML::CommandParser::Parse(message);
	SML::Command command = UtilityMod::commandSystem.get_command(data.Command);

	if (!command.Empty) {
		SML::mod_info(UtilityMod::name, "Invoking Command: ", data.Command);

		command.Invoke(player, data);

		returns->UseOriginalFunction = false;
	}
	else {
		SML::mod_info(UtilityMod::name, "Invalid Command: ", data.Command);
	}
}

void Events::OnKeyInput(SML::ModReturns* returns, void* input, void* key, void* event, float amountDepressed, bool gamepad) {
	if (Global::m_LocalPlayer->PlayerController != nullptr && Global::m_LocalPlayer->PlayerController->Character != nullptr) {
		auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

		if (GetAsyncKeyState(Config::flyHotkey) & 0x8000) {
			auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

			if (CommandStates::isFlying) {
				character->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking, 0);
				Util::sendMessage(L"Fly-Mode disabled");
			}
			else {
				character->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying, 0);
				Util::sendMessage(L"Fly-Mode enabled");
			}

			CommandStates::isFlying = !CommandStates::isFlying;
		}
	}
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

	//SML::mod_info(UtilityMod::name, "Detected Damage: ", type.GetName()); // Log damage type

	// Ignore fall damage while flying
	if (CommandStates::isFlying) {
		if (type.GetName() == "Default__DamageType_FallDamage_C") {
			returns->UseOriginalFunction = false;
			return;
		}
	}
}

void Events::WorldInit(SML::ModReturns* returns, void* controller) {
	// Cache global objects

	std::map<std::string, UBlueprintGeneratedClass*> foundItems;
	std::map<std::string, UFont*> foundFonts;

	SML::mod_info(UtilityMod::name, "Caching global objects...");

	auto gObjects = UObject::GetGlobalObjects();
	
	for (int i = 0; i < gObjects.Num(); i++) {
		if (gObjects.GetObjectPtr(i) == nullptr) {
			SML::mod_warning(UtilityMod::name, "GObject pointer was a nullptr");
			SML::mod_warning(UtilityMod::name, "skipping ", gObjects.Num() - i, " objects");
			break;
		}

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

					SML::mod_info(UtilityMod::name, "Found item: " + itemName);
				}
			}
		}
	}

	SML::mod_info(UtilityMod::name, "Total Fonts: ", foundFonts.size());
	SML::mod_info(UtilityMod::name, "Total Items: ", foundItems.size());
	SML::mod_info(UtilityMod::name, "Total GObjects: ", gObjects.Num());
	SML::mod_info(UtilityMod::name, "Caching complete!");

	Global::fonts = foundFonts;
	Global::items = foundItems;
}

/// WIP

bool Events::FirstCall = true;

void Events::OnLoadObject(SML::ModReturns* returns, SDK::FString* PathName, PVOID funcpointer) {
	auto pointer = (void*(WINAPI*)(FString *))funcpointer;
	
	FString str(L"/Game/FactoryGame/Buildable/Factory/ConveyorBeltMk2/UI/ConveyorMk2_256.ConveyorMk2_256");

	void * res = pointer(&str);

	if (res == nullptr) {
		SML::mod_info(UtilityMod::name, "object not found");
	}
}

void Events::OnDrawHUD(SML::ModReturns* returns, void* hudptr) {
	if (Events::FirstCall) {
		/// SDK Init
		SML::mod_info(UtilityMod::name, "Initializing the sdk...");

		Global::BaseAddress = (DWORD_PTR)GetModuleHandle(nullptr);
		MODULEINFO info;
		GetModuleInformation(GetCurrentProcess(), (HMODULE)Global::BaseAddress, &info, sizeof(info));

		auto btAddrUWorld = Util::FindPattern((PBYTE)Global::BaseAddress, info.SizeOfImage,
			(PBYTE) "\x48\x8B\x1D\x00\x00\x00\x04\x48\x85\xDB\x74\x3B",
			"xxx???xxxxxx");
		auto btOffUWorld = *reinterpret_cast<uint32_t*>(btAddrUWorld + 3);
		Global::m_UWorld = reinterpret_cast<UWorld**>(btAddrUWorld + 7 + btOffUWorld);

		auto btAddrGObj = Util::FindPattern((PBYTE)Global::BaseAddress, info.SizeOfImage,
			(PBYTE) "\x48\x8D\x0D\x00\x00\x00\x04\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x01",
			"xxx???xx???xx???xx???x");
		auto btOffGObj = *reinterpret_cast<uint32_t*>(btAddrGObj + 3);
		UObject::GObjects = reinterpret_cast<FUObjectArray*>(btAddrGObj + 7 + btOffGObj);

		auto btAddrGName = Util::FindPattern((PBYTE)Global::BaseAddress, info.SizeOfImage,
			(PBYTE) "\x48\x8B\x05\x00\x00\x00\x03\x48\x85\xC0\x0F\x85\xB0",
			"xxx???xxxxxxx");
		auto btOffGName = *reinterpret_cast<uint32_t*>(btAddrGName + 3);
		FName::GNames = *reinterpret_cast<TNameEntryArray**>(btAddrGName + 7 + btOffGName);

		Global::InitializeGlobals();

		Events::FirstCall = false;
	}
}

void Events::ServerMove_Validate(SML::ModReturns* returns, void *movecomp, float ClientTimeStamp, float DeltaTime, void *Accel, void *RelativeClientLoc, void *ClientMovementBase, void* ClientBaseBoneName, char ClientMovementMode) {
	returns->UseOriginalFunction = false;

	((UCharacterMovementComponent*)movecomp)->SetMovementMode(TEnumAsByte<EMovementMode>(ClientMovementMode), 0);
	((UCharacterMovementComponent*)movecomp)->CharacterOwner->K2_SetActorLocation(*(FVector*)RelativeClientLoc, true, false, nullptr);
}

void Events::ServerCheckClientError(SML::ModReturns* returns, void* movecomp, float ClientTimeStamp, float DeltaTime, void* Accel, void* ClientWorldLocation, void* RelativeClientLocation, void* ClientMovementBase, void* ClientBaseBoneName, char ClientMovementMode) {
	// not used
}

void Events::WorkBenchCanProduce(SML::ModReturns* returns, void* workbench, void* recipe, void* inventory) {
	AFGGameState* gamestate = static_cast<AFGGameState*>((*Global::m_UWorld)->GameState);

	bool active = gamestate->GetCheatNoCost();

	returns->ReturnValue = &active;
	returns->UseOriginalFunction = !gamestate->GetCheatNoCost();
}

void Events::PawnAddMovementInput(SML::ModReturns* returns, void *pawn, void* WorldDirection, float ScaleValue, bool bForce) {
	if (CommandStates::isFlying)
		returns->UseOriginalFunction = false;
}

void Events::WireConnect(SML::ModReturns* returns, void* wire, void* first, void* second) {
	if (first == nullptr || second == nullptr)
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
	float fixedDeltaTime = 1.f / Config::fixedFrameRate;

	if (CommandStates::isFlying) {
		if (Global::m_LocalPlayer->PlayerController != nullptr && Global::m_LocalPlayer->PlayerController->Character != nullptr) {
			auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

			UCharacterMovementComponent* moveComponent = character->CharacterMovement;

			if (!moveComponent->IsFlying()) { // Reenable flymode if player dies
				moveComponent->SetMovementMode(EMovementMode::MOVE_Flying, 0);
			}

			if (isFocused) {
				auto controller = static_cast<AFGPlayerController*>(Global::m_LocalPlayer->PlayerController);

				bool speed = GetAsyncKeyState(Config::speedkey);

				bool down = GetAsyncKeyState(Config::downkey);
				bool up = GetAsyncKeyState(Config::upkey);

				bool forward = GetAsyncKeyState(Config::forwardkey);
				bool backward = GetAsyncKeyState(Config::backwardkey);
				bool right = GetAsyncKeyState(Config::rightkey);
				bool left = GetAsyncKeyState(Config::leftkey);

				if ((down || up || forward || backward || right || left) && controller->bShowMouseCursor == 0) {
					FVector velocity = FVector();

					velocity.X = (int)forward - (int)backward;
					velocity.Y = (int)right - (int)left;
					velocity.Z = (int)up - (int)down;

					// Normalize
					Util::Normalize(velocity);

					// Rotate
					velocity = Util::Rotate(velocity, controller->PlayerCameraManager->GetCameraRotation().Yaw);

					// Add speed modifiers
					velocity = Util::Mutliply(velocity, 10 * (speed ? Config::flyspeedmodemultiplier : 1) * CommandStates::flySpeed * Config::baseflyspeed);
					
					// Set target velocity
					CommandStates::targetVelocity = velocity;
				}
				else {
					CommandStates::targetVelocity = FVector();
				}
			}
			else {
				CommandStates::targetVelocity = FVector();
			}

			float deltaTime = 0;

			// deltaseconds or fixeddeltatime?
			if (Config::flyUseDeltaSeconds)
				deltaTime = DeltaSeconds;
			else
				deltaTime = fixedDeltaTime;

			if (Config::smoothFly) {
				// Lerp from current velocity to the target velocity
				FVector tmp = Util::Lerp(moveComponent->Velocity, CommandStates::targetVelocity, deltaTime * Config::flyVelocityDamping);
				tmp.X = abs(tmp.X) < 0.1 ? 0 : tmp.X;
				tmp.Y = abs(tmp.Y) < 0.1 ? 0 : tmp.Y;
				tmp.Z = abs(tmp.Z) < 0.1 ? 0 : tmp.Z;
				moveComponent->Velocity = tmp;
			}
			else
				// Set current velocity to the target velocity
				moveComponent->Velocity = CommandStates::targetVelocity;
		}
	}
}