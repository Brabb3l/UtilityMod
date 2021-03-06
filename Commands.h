#pragma once

#include <other/CommandSystem.h>

class Commands {
public:
	static void ClearInventory(void * player, SML::CommandParser::CommandData data);
	static void ResizeInventory(void * player, SML::CommandParser::CommandData data);
	static void Heal(void * player, SML::CommandParser::CommandData data);
	static void LockTime(void * player, SML::CommandParser::CommandData data);
	static void Time(void * player, SML::CommandParser::CommandData data);
	static void SetDismantleDelay(void * player, SML::CommandParser::CommandData data);
	static void NoClip(void * player, SML::CommandParser::CommandData data);
	static void IgnoreBuildRestriction(void* player, SML::CommandParser::CommandData data);
	static void UnlockAllSchematics(void* player, SML::CommandParser::CommandData data);
	static void Creative(void* player, SML::CommandParser::CommandData data);
	static void CreativePower(void * player, SML::CommandParser::CommandData data);
	//static void SetTimeDilation(void* player, SML::CommandParser::CommandData data);
	static void GiveItem(void* player, SML::CommandParser::CommandData data);
	static void Fly(void* player, SML::CommandParser::CommandData data);
	static void God(void* player, SML::CommandParser::CommandData data);
	static void Help(void* player, SML::CommandParser::CommandData data);
};