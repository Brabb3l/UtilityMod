#include <stdafx.h>
#include <string>
#include <event/Event.h>
#include <event/game/PlayerEvents.h>
#include <event/game/GlobalEvents.h>
#include <util/Configuration.h>
#include "BaseMod.h"
#include "ModInfo.h"

void * player;
void * controller;

std::string ModName = "ItemMod";

// Util functions

const std::vector<std::string> split(const std::string& s, const char& c)
{
	std::string buff{ "" };
	std::vector<std::string> v;

	for (auto n : s) {
		if (n != c) {
			buff += n;
		}
		else if (n == c && buff != "") {
			v.push_back(buff);
			buff = "";
		}
	}

	if (buff != "")
		v.push_back(buff);

	return v;
}

void sendMessage(std::string msg) {
	((void(WINAPI*)(void*, std::string))get_mod_loader_function("player_send_message"))(controller, msg);
}

// Events

bool onPlayerSentMessage(std::vector<void*>& args) {
	try {
		std::string str = *(std::string *) args[1];

		if (str.empty() || str[0] != '!')
			return true;

		std::vector<std::string> commandArgs = split(str, ' ');

		for (auto n : commandArgs) info_mod(ModName, n);

		std::string command = commandArgs[0];

		if (command == "!setitemamount") {
			if (commandArgs.size() != 3) {
				sendMessage("[MOD] Use !setitemamount <slot> <amount>");

				return false;
			}

			info_mod(ModName, "Executing command 'setitemamount'...");

			int slot = std::stoi(commandArgs[1]);
			int amount = std::stoi(commandArgs[2]);

			void * inventory = (void *)(*(size_t*)offset(player, 0xa48));
			int * defaultInvSize = (int *)offset(inventory, 0x0138);
			int * additionalInvSize = (int *)offset(inventory, 0x013c);

			int invSize = *defaultInvSize + *additionalInvSize;

			if (slot < 0 || slot > invSize - 1 || amount < 0) {
				sendMessage("[MOD] Use !setitemamount <slot> <amount>");

				return false;
			}

			void * items = (void *)(*(size_t*)offset(inventory, 0x0148));
			int * iamount = (int *)offset(items, 0x20 * slot + 0x18);

			*iamount = amount;

			sendMessage("[MOD] Item amount has been set!");
		}
	}
	catch (std::exception e) {
		sendMessage("[MOD] Use !setitemamount <slot> <amount>");
	}

	return false;
}

bool onPlayerBeginPlay(std::vector<void*>& args) {
	player = args[0];

	return true;
}

bool onPlayerControllerBeginPlay(std::vector<void*>& args) {
	controller = args[0];

	return true;
}

GLOBAL void setup() {
	dispatcher.subscribe(EventType::PlayerSentMessage, onPlayerSentMessage);
	dispatcher.subscribe(EventType::PlayerBeginPlay, onPlayerBeginPlay);
	dispatcher.subscribe(EventType::PlayerControllerBeginPlay, onPlayerControllerBeginPlay);
	info_mod(ModName, "Setup completed!");
}

GLOBAL bool run(EventType type, std::vector<void*>& args) {
	return dispatcher.post(type, args);
}

GLOBAL void cleanup() {
	// do things
}