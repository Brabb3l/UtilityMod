#include <stdafx.h>
#include <string>
#include <event/Event.h>
#include <event/game/PlayerEvents.h>
#include <event/game/GlobalEvents.h>
#include <util/Configuration.h>
#include "BaseMod.h"
#include "ModInfo.h"
#include "CommandSystem.h"
#include "Util.h"

// Globals variables

class PlayerCharacter* character;
void * controller;
void * world;

std::string ModName = "ItemMod";

// Custom Systems

class CommandSystem* commandSystem;

// Util functions

void sendMessage(std::string msg) {
	((void(WINAPI*)(void*, std::string))get_mod_loader_function("player_send_message"))(controller, msg);
}

// Events

void onCommand(std::string command, std::vector<std::string> args, void * player) {
	try {
		if (command == "setitemamount") {
			if (args.size() != 2) {
				sendMessage("[MOD] Use /setitemamount <slot> <amount>");

				return;
			}

			int slot = std::stoi(args[0]);
			int amount = std::stoi(args[1]);

			InventoryComponent* inventory = character->inventory;

			int invSize = *inventory->defaultSize + *inventory->adjustedSize;

			if (slot < 0 || slot > invSize - 1 || amount < 0) {
				sendMessage("[MOD] Invalid parameters");

				return;
			}

			ItemStack itemStack = inventory->getItem(slot);
			*itemStack.amount = amount;

			sendMessage("[MOD] Item amount has been set.");
		}
		else if (command == "heal") {
			*character->healthComponent->currentHealth = *character->healthComponent->maxHealth;

			sendMessage("[MOD] You were healed.");
		}
		else if (command == "playeraddress") {
			info_mod(ModName, "Player address:\t", character->pointer);
		}
		else if (command == "help") {
			sendMessage("[MOD] /setitemamount <slot> <amount>");
			sendMessage("[MOD] /heal");
		}
	}
	catch (std::exception e) {
		sendMessage("[MOD] Unexpected error");
	}
}

bool onPlayerBeginPlay(std::vector<void*>& args) {
	character = new PlayerCharacter(args[0]);

	return true;
}

bool onPlayerControllerBeginPlay(std::vector<void*>& args) {
	controller = args[0];

	return true;
}

/* Needed for Command System */
bool onPlayerSentMessage(std::vector<void*>& args) {
	return commandSystem->execute(*(std::string*)args[1], args[0]);
}

GLOBAL void setup() {
	commandSystem = new CommandSystem();

	dispatcher.subscribe(EventType::PlayerSentMessage, onPlayerSentMessage);
	dispatcher.subscribe(EventType::PlayerBeginPlay, onPlayerBeginPlay);
	dispatcher.subscribe(EventType::PlayerControllerBeginPlay, onPlayerControllerBeginPlay);

	commandSystem->subscribe(onCommand);

	info_mod(ModName, "Setup completed!");
}

GLOBAL bool run(EventType type, std::vector<void*>& args) {
	return dispatcher.post(type, args);
}

GLOBAL void cleanup() {
	delete commandSystem;
	delete character;
}