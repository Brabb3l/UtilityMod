#include "stdafx.h"

#include "Commands.h"

#include "ExampleMod.h"

#include "Global.h"
#include "Util.h"

#include <math.h>

void Commands::ClearInventory(void* player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

	character->mInventory->Empty();

	Util::sendMessage(L"Your inventory has been emptied!");
}

void Commands::ResizeInventory(void* player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);
	auto gamestate = static_cast<AFGGameState*>((*Global::m_UWorld)->GameState);

	if (data.Args.size() < 1) {
		Util::sendMessage(L"Use /resizeinv <size>");
		return;
	}

	if (!Util::is_number(data.Args[0])) {
		Util::sendMessage(L"size must be a number!");
		return;
	}

	int size = data.get_int(0);

	if (size < 16) {
		character->mInventory->mDefaultInventorySize = size;
		character->mInventory->mAdjustedSizeDiff = 0;

		gamestate->mDefaultPlayerInventorySlots = size;
		gamestate->mNumAdditionalInventorySlots = 0;
	}
	else {
		character->mInventory->mDefaultInventorySize = 16;
		character->mInventory->mAdjustedSizeDiff = size - 16;

		gamestate->mDefaultPlayerInventorySlots = 16;
		gamestate->mNumAdditionalInventorySlots = size - 16;
	}

	character->mInventory->Resize(data.get_int(0));

	Util::sendMessage(L"Your inventory was resized!");
}

void Commands::Heal(void* player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

	character->GetHealthComponent()->Heal(character->GetHealthComponent()->mMaxHealth - character->GetHealthComponent()->mCurrentHealth);

	Util::sendMessage(L"You've been healed!");
}

void Commands::LockTime(void * player, SML::CommandParser::CommandData data) {
	AFGTimeOfDaySubsystem* time = static_cast<AFGTimeOfDaySubsystem*>(static_cast<AFGGameState*>((*Global::m_UWorld)->GameState)->mTimeSubsystem);

	if (time->mUpdateTime) {
		Util::sendMessage(L"Time locked!");
	} else {
		Util::sendMessage(L"Time unlocked!");
	}

	time->mUpdateTime = !time->mUpdateTime;
}

void Commands::Time(void * player, SML::CommandParser::CommandData data) {
	AFGTimeOfDaySubsystem* time = static_cast<AFGTimeOfDaySubsystem*>(static_cast<AFGGameState*>((*Global::m_UWorld)->GameState)->mTimeSubsystem);

	if (data.Args.size() > 0) {
		if (data.Args.size() == 2) {
			std::string subCommand = data.get_string(0);

			if (subCommand == "set") {
				std::string val = data.get_string(1);

				if (Util::is_float(val)) {
					time->mDaySeconds = data.get_float(1) * 60;
				}
				else if (val == "day") {
					time->mDaySeconds = 12 * 60 * 60; // 12:00
				}
				else if (val == "night") {
					time->mDaySeconds = 0; // 00:00 or 24:00
				}
				else {
					Util::sendMessage(L"Use /time set <day/night/minutes>");
					return;
				}

				Util::sendMessage(L"Time set!");
			} 
			else if (subCommand == "add") {
				std::string val = data.get_string(1);

				if (Util::is_float(val)) {
					time->mDaySeconds += data.get_float(1) * 60;
				}
				else {
					Util::sendMessage(L"Use /time add <minutes>");
				}

				Util::sendMessage(L"Time set!");
			}
			else {
				Util::sendMessage(L"Use /time <set/add>...");
				return;
			}
		}
		else {
			Util::sendMessage(L"Use /time <set/add>...");
		}
	}
	else {
		std::wstringstream timeMessage;

		int seconds = floor(time->mDaySeconds);
		int minutes = seconds / 60;
		int hours = minutes / 60;

		seconds %= 60;
		minutes %= 60;

		timeMessage << L"Time: ";

		if (hours < 10)
			timeMessage << L"0";

		timeMessage << hours << L":";

		if (minutes < 10)
			timeMessage << L"0";

		timeMessage << minutes;

		Util::sendMessage(timeMessage.str());
	}
}

void Commands::SetDismantleDelay(void * player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);
	UFGBuildGunStateDismantle* dismantlestate = static_cast<UFGBuildGunStateDismantle*>(character->GetBuildGun()->GetBuildGunStateFor(EBuildGunState::BGS_DISMANTLE));

	if (data.Args.size() < 1) {
		Util::sendMessage(L"Use /setdismantledelay <delay>");
		return;
	}

	if (!Util::is_float(data.Args[0])) {
		Util::sendMessage(L"delay must be a number");
		return;
	}

	float delay = data.get_float(0);

	if (delay < 0) {
		Util::sendMessage(L"delay must be a positive number");
		return;
	}

	float lastDelay = dismantlestate->mActionDelay;

	dismantlestate->mActionDelay = delay;

	SML::mod_info(UtilityMod::name, "Dismantle delay was set to ", delay, " (old delay: ", lastDelay, ")");

	Util::sendMessage(L"Dismantle delay set!");
}

void Commands::NoClip(void * player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

	if (CommandStates::noClip) {
		character->SetActorEnableCollision(true);

		Util::sendMessage(L"NoClip-Mode disabled!");
	}
	else {
		character->SetActorEnableCollision(false);

		Util::sendMessage(L"NoClip-Mode enabled!");
	}

	CommandStates::noClip = !CommandStates::noClip;
}

void Commands::IgnoreBuildRestriction(void* player, SML::CommandParser::CommandData data) {
	if (CommandStates::ignoreBuildRestriction) {
		Util::sendMessage(L"Enabled build restriction!");
	}
	else {
		Util::sendMessage(L"Disabled build restriction!");
	}

	CommandStates::ignoreBuildRestriction = !CommandStates::ignoreBuildRestriction;
}

void Commands::UnlockAllSchematics(void* player, SML::CommandParser::CommandData data) {
	if (!CommandStates::unlockAllSchematicsConfirmation) {
		Util::sendMessage(L"You cannot undo this action! Type '/unlockall' to confirm it");

		CommandStates::unlockAllSchematicsConfirmation = true;
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

	Util::sendMessage(L"All schematics/phases are now unlocked!");
}

void Commands::CreativePower(void* player, SML::CommandParser::CommandData data) {
	AFGGameState* gamestate = static_cast<AFGGameState*>((*Global::m_UWorld)->GameState);

	if (CommandStates::creativePowerMode) {
		gamestate->SetCheatNoPower(false);

		Util::sendMessage(L"CreativePower-Mode disabled!");
	}
	else {
		gamestate->SetCheatNoPower(true);

		Util::sendMessage(L"CreativePower-Mode enabled!");
	}

	CommandStates::creativePowerMode = !CommandStates::creativePowerMode;
}

void Commands::Creative(void* player, SML::CommandParser::CommandData data) {
	AFGGameState* gamestate = static_cast<AFGGameState*>((*Global::m_UWorld)->GameState);

	if (gamestate->GetCheatNoCost()) {
		gamestate->SetCheatNoCost(false);

		Util::sendMessage(L"Creative-Mode disabled!");
	}
	else {
		gamestate->SetCheatNoCost(true);

		Util::sendMessage(L"Creative-Mode enabled!");
	}
}

/*
void Commands::SetTimeDilation(void* player, SML::CommandParser::CommandData data) {
	if (data.Args.size() < 1) {
		Util::sendMessage(L"Use /settimedilation <dilation>");
		return;
	}

	if (!Util::is_float(data.Args[0])) {
		Util::sendMessage(L"dilation must be a number");
		return;
	}

	float dilation = data.get_float(0);

	if (dilation <= 0) {
		Util::sendMessage(L"dilation must be greater than 0");
		return;
	}

	Global::m_persistentLevel->WorldSettings->TimeDilation = dilation;
	Util::sendMessage(L"Time dilation set!");
}
*/

void Commands::GiveItem(void* player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

	if (data.Args.size() < 2) {
		Util::sendMessage(L"Use /give <itemname> <amount>");
		return;
	}

	if (Global::items.find(data.get_string(0)) == Global::items.end()) {
		Util::sendMessage(L"This Item does not exist.");
		return;
	}

	if (!Util::is_number(data.Args[1])) {
		Util::sendMessage(L"amount must be a number");
		return;
	}

	FInventoryStack stack = Util::MakeItemStack(data.get_string(0), data.get_int(1));

	character->GetInventory()->AddStack(stack, true);
}

void Commands::Fly(void* player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

	if (data.Args.size() == 0) { // /fly
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
	else if (data.Args.size() > 0) {
		std::string subCommand = data.Args[0];

		if (subCommand == "speed") { // /fly speed
			if (data.Args.size() < 2) {
				Util::sendMessage(L"Use /fly speed <speed>");
				return;
			}

			try {
				if (Util::is_float(data.Args[1])) {
					CommandStates::flySpeed = data.get_float(1);

					std::string newspeed = data.get_string(1);

					Util::sendMessage(L"Fly speed set to " + std::wstring(newspeed.begin(), newspeed.end()));
				}
				else {
					Util::sendMessage(L"Speed must be a number");
				}
			}
			catch (const std::out_of_range& ex) {
				Util::sendMessage(L"Speed must be a valid number");
			}
		}
		else if (subCommand == "mode") { // /fly mode
			if (data.Args.size() < 2) {
				Util::sendMessage(L"Use /fly mode <normal/smooth>");
				return;
			}

			std::string mode = data.Args[1];

			if (mode == "normal") {
				Config::smoothFly = false;

				Util::sendMessage(L"Fly mode set to normal");
			}
			else if (mode == "smooth") {
				Config::smoothFly = true;

				Util::sendMessage(L"Fly mode set to smooth");
			}
			else {
				Util::sendMessage(L"Use /fly mode <normal/smooth>");
			}
		}
		else if(subCommand == "damping") { // /fly speed
			if (data.Args.size() < 2) {
				Util::sendMessage(L"Use /fly damping <amount>");
				return;
			}

			try {
				if (Util::is_float(data.Args[1])) {
					Config::flyVelocityDamping = data.get_float(1);

					std::string newdamping = data.get_string(1);

					Util::sendMessage(L"Fly velocity damping set to " + std::wstring(newdamping.begin(), newdamping.end()));
				}
				else {
					Util::sendMessage(L"Damping must be a number");
				}
			}
			catch (const std::out_of_range& ex) {
				Util::sendMessage(L"Damping must be a valid number");
			}
		}
		else {
			Util::sendMessage(L"Use /fly <speed/mode/damping> ...");
		}
	}
}

void Commands::God(void* player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	auto character = static_cast<AFGCharacterPlayer*>(Global::m_LocalPlayer->PlayerController->Character);

	if (character->bCanBeDamaged) {
		Util::sendMessage(L"God-Mode enabled");
		character->GetHealthComponent()->Heal(character->GetHealthComponent()->mMaxHealth - character->GetHealthComponent()->mCurrentHealth);
	}
	else {
		Util::sendMessage(L"God-Mode disabled");
	}

	character->bCanBeDamaged = !character->bCanBeDamaged;
}

void Commands::Help(void* player, SML::CommandParser::CommandData data) {
	if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->Character == nullptr)
		return;

	Util::sendMessage(L"- /give <item> <amount>    (WIP)");
	Util::sendMessage(L"- /fly [speed/mode] ...");
	Util::sendMessage(L"- /flyspeed <speed>");
	Util::sendMessage(L"- /god");
	//Util::sendMessage(L"- /settimedilation <dilation>");
	Util::sendMessage(L"- /creative");
	Util::sendMessage(L"- /creativepower");
	Util::sendMessage(L"- /unlockall");
	Util::sendMessage(L"- /togglebuildrestriction");
	Util::sendMessage(L"- /noclip");
	Util::sendMessage(L"- /setdismantledelay");
	Util::sendMessage(L"- /time [set/add] [day/night/minutes]");
	Util::sendMessage(L"- /locktime");
	Util::sendMessage(L"- /heal");
	Util::sendMessage(L"- /resizeinv");
	Util::sendMessage(L"- /clearinv");
}