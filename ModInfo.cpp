#include "stdafx.h"
#include "ModInfo.h"

GLOBAL const std::string ModName = "ItemMod";
GLOBAL const std::string ModVersion = "0.2";
GLOBAL const std::string ModDescription = "Cheating and stuff...";
GLOBAL const std::string ModAuthors = "Brabb3l";

GLOBAL void recieve_hooked_functions(std::map<EventType, PVOID> functions) {
	hookedFunctions = functions;
}