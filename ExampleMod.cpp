#include <stdafx.h>

#include "ExampleMod.h"
#include "Global.h"
#include "Util.h"
#include "Events.h"
#include "Commands.h"

GLOBAL UtilityMod * CreateMod()
{
	return new UtilityMod;
}

/// Set static variables
UtilityMod* UtilityMod::mod;
SML::CommandSystem UtilityMod::commandSystem;
const char* UtilityMod::name = "UtilityMod";
SML::Configuration UtilityMod::config("UtilityMod");

/// SML Stuff and Mod Init

void UtilityMod::Setup() {
	UtilityMod::mod = this;
	UtilityMod::commandSystem = SML::CommandSystem();

	SML::mod_info(UtilityMod::name, "Initializing mod...");

	config.load();

	/// Set config defaults
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

	/// Apply changes to config
	config.save();
	config.load();

	SML::mod_info(UtilityMod::name, "Loading Config...");

	Config::flyHotkey = Util::GetKey(config.get("Fly_Hotkey", (std::string)"H"));
	Config::forwardkey = Util::GetKey(config.get("Fly_Forward_Key", (std::string)"W"));
	Config::backwardkey = Util::GetKey(config.get("Fly_Backward_Key", (std::string)"S"));
	Config::rightkey = Util::GetKey(config.get("Fly_Right_Key", (std::string)"D"));
	Config::leftkey = Util::GetKey(config.get("Fly_Left_Key", (std::string)"A"));
	Config::upkey = Util::GetKey(config.get("Fly_Up_Key", (std::string)"SPACE"));
	Config::downkey = Util::GetKey(config.get("Fly_Down_Key", (std::string)"CONTROL"));
	Config::speedkey = Util::GetKey(config.get("Fly_Speed_Mode_Key", (std::string)"SHIFT"));
	Config::flyspeedmodemultiplier = config.get("Fly_Speed_Mode_Multiplier", 3.0);
	Config::baseflyspeed = config.get("Fly_Base_Speed", 1.0);

	/// SDK Init
	SML::mod_info(UtilityMod::name, "Initializing the sdk...");

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

	/// Subscribe to events
	SML::mod_info(UtilityMod::name, "Subscribing to events...");

	_dispatcher.subscribe(SML::HookLoader::Event::AFGCharacterPlayerBeginPlay, Events::WorldInit);
	_dispatcher.subscribe(SML::HookLoader::Event::AFGPlayerControllerEnterChatMessage, Events::GetMessage);
	_dispatcher.subscribe(SML::HookLoader::Event::WorldTick, Events::Tick);
	_dispatcher.subscribe(SML::HookLoader::Event::UFGHealthComponentTakeDamage, Events::OnTakeDamage);
	_dispatcher.subscribe(SML::HookLoader::Event::UPlayerInputInputKey, Events::OnKeyInput);
	_dispatcher.subscribe(SML::HookLoader::Event::CanConstructHologram, Events::CanConstructHologram);
	_dispatcher.subscribe(SML::HookLoader::Event::ResourceNodeIsOccupied, Events::ResourceNodeIsOccupied);
	_dispatcher.subscribe(SML::HookLoader::Event::ResourceExtractorSetResourceNode, Events::BuildableSetResourceNode);
	_dispatcher.subscribe(SML::HookLoader::Event::GeoThermalSetResourceNode, Events::BuildableSetResourceNode);
	_dispatcher.subscribe(SML::HookLoader::Event::WireConnect, Events::WireConnect);
	
	//_dispatcher.subscribe(SML::HookLoader::Event::DrawHUD, OnDrawHUD);

	/// Register commands
	SML::mod_info(UtilityMod::name, "Registering commands...");

	UtilityMod::commandSystem.RegisterCommand("give", Commands::GiveItem);
	UtilityMod::commandSystem.RegisterCommand("fly", Commands::Fly);
	UtilityMod::commandSystem.RegisterCommand("flyspeed", Commands::FlySpeed);
	UtilityMod::commandSystem.RegisterCommand("god", Commands::God);
	UtilityMod::commandSystem.RegisterCommand("help", Commands::Help);
	UtilityMod::commandSystem.RegisterCommand("settimedilation", Commands::SetTimeDilation);
	UtilityMod::commandSystem.RegisterCommand("creative", Commands::Creative);
	UtilityMod::commandSystem.RegisterCommand("unlockall", Commands::UnlockAllSchematics);
	UtilityMod::commandSystem.RegisterCommand("togglebuildrestriction", Commands::IgnoreBuildRestriction);
	UtilityMod::commandSystem.RegisterCommand("noclip", Commands::NoClip);

	SML::mod_info(UtilityMod::name, "Initializing complete!");
}

void UtilityMod::Cleanup() {
	// hi
}
