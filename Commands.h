#pragma once

#include <other/CommandSystem.h>

class Commands {
public:
	static void NoClip(void * player, SML::CommandParser::CommandData data);
	static void IgnoreBuildRestriction(void* player, SML::CommandParser::CommandData data);
	static void UnlockAllSchematics(void* player, SML::CommandParser::CommandData data);
	static void Creative(void* player, SML::CommandParser::CommandData data);
	static void CreativePower(void * player, SML::CommandParser::CommandData data);
	static void SetTimeDilation(void* player, SML::CommandParser::CommandData data);
	static void GiveItem(void* player, SML::CommandParser::CommandData data);
	static void Fly(void* player, SML::CommandParser::CommandData data);
	static void FlySpeed(void* player, SML::CommandParser::CommandData data);
	static void God(void* player, SML::CommandParser::CommandData data);
	static void Help(void* player, SML::CommandParser::CommandData data);
};