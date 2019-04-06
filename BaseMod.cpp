#include <stdafx.h>
#include <string>
#include <event/Event.h>
#include <event/game/PlayerEvents.h>
#include <event/game/GlobalEvents.h>
#include <util/Configuration.h>
#include "BaseMod.h"
#include "ModInfo.h"
#include "CommandSystem.h"

void * character;
void * controller;
void * world;

CommandSystem commandSystem;

std::string ModName = "ItemMod";

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

			void * inventory = (void *)(*(size_t*)offset(character, 0xa48));
			int * defaultInvSize = (int *)offset(inventory, 0x0138);
			int * additionalInvSize = (int *)offset(inventory, 0x013c);

			int invSize = *defaultInvSize + *additionalInvSize;

			if (slot < 0 || slot > invSize - 1 || amount < 0) {
				sendMessage("[MOD] Use /setitemamount <slot> <amount>");

				return;
			}

			void * items = (void *)(*(size_t*)offset(inventory, 0x0148));
			int * iamount = (int *)offset(items, 0x20 * slot + 0x18);

			*iamount = amount;

			sendMessage("[MOD] Item amount has been set!");
		}
		else if (command == "addressinfo") {
			info_mod(ModName, "Player Address:\t", character);
			info_mod(ModName, "Inventory Address:\t", (void *)(*(size_t*)offset(character, 0xa48)));
		}
		else if (command == "help") {
			sendMessage("[MOD] /setitemamount <slot> <amount>");
			sendMessage("[MOD] /addressinfo  (WIP)");
		}
	}
	catch (std::exception e) {
		sendMessage("[MOD] Use /help");
	}
}

bool onPlayerBeginPlay(std::vector<void*>& args) {
	info_mod(ModName, "Got Character");
	character = args[0];

	return true;
}

bool onPlayerControllerBeginPlay(std::vector<void*>& args) {
	info_mod(ModName, "Got Controller");
	controller = args[0];

	return true;
}

bool onPlayerSentMessage(std::vector<void*>& args) {
	info_mod("ItemMod", "Incoming Message!");

	return commandSystem.execute(*(std::string*)args[1], args[0]);
}

GLOBAL void setup() {
	dispatcher.subscribe(EventType::PlayerSentMessage, onPlayerSentMessage);
	dispatcher.subscribe(EventType::PlayerBeginPlay, onPlayerBeginPlay);
	dispatcher.subscribe(EventType::PlayerControllerBeginPlay, onPlayerControllerBeginPlay);

	commandSystem.subscribe(onCommand);

	info_mod(ModName, "Setup completed!");
}

GLOBAL bool run(EventType type, std::vector<void*>& args) {
	return dispatcher.post(type, args);
}

GLOBAL void cleanup() {
	// do things
}