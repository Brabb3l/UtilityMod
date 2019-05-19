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

	json config = JsonConfig::load(UtilityMod::name, {
		{"Fly", {
			{"Controls", {
				{"Hotkey", "H"},
				{"Forward", "W"},
				{"Backward", "S"},
				{"Right", "D"},
				{"Left", "A"},
				{"Up", "SPACE"},
				{"Down", "CONTROL"},
				{"SpeedMode", "SHIFT"},
			}},
			{"Settings", {
				{"SpeedModeMultiplier", 3.f},
				{"BaseSpeed", 50.f},
				{"UseDeltaTime", true},
				{"Smooth", false},
				{"VelocityDamping", 6.f},
			}},
		}},
		{"Other", {
			{"FixedFrameRate", 60},
		}},
	});

	/// Read Config

	// Fly Controls
	Config::flyHotkey = Util::GetKey(config["Fly"]["Controls"]["Hotkey"].get<std::string>());
	Config::forwardkey = Util::GetKey(config["Fly"]["Controls"]["Forward"].get<std::string>());
	Config::backwardkey = Util::GetKey(config["Fly"]["Controls"]["Backward"].get<std::string>());
	Config::rightkey = Util::GetKey(config["Fly"]["Controls"]["Right"].get<std::string>());
	Config::leftkey = Util::GetKey(config["Fly"]["Controls"]["Left"].get<std::string>());
	Config::upkey = Util::GetKey(config["Fly"]["Controls"]["Up"].get<std::string>());
	Config::downkey = Util::GetKey(config["Fly"]["Controls"]["Down"].get<std::string>());
	Config::speedkey = Util::GetKey(config["Fly"]["Controls"]["SpeedMode"].get<std::string>());

	// Fly settings
	Config::flyspeedmodemultiplier = config["Fly"]["Settings"]["SpeedModeMultiplier"].get<float>();
	Config::baseflyspeed = config["Fly"]["Settings"]["BaseSpeed"].get<float>();
	Config::flyUseDeltaSeconds = config["Fly"]["Settings"]["UseDeltaTime"].get<bool>();
	Config::smoothFly = config["Fly"]["Settings"]["Smooth"].get<bool>();
	Config::flyVelocityDamping = config["Fly"]["Settings"]["VelocityDamping"].get<float>();

	// Other
	Config::fixedFrameRate = config["Other"]["FixedFrameRate"].get<int>();

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
	_dispatcher.subscribe(SML::HookLoader::Event::PawnAddMovementInput, Events::PawnAddMovementInput);
	_dispatcher.subscribe(SML::HookLoader::Event::WorkBenchCanProduce, Events::WorkBenchCanProduce);
	_dispatcher.subscribe(SML::HookLoader::Event::ServerMove_Validate, Events::ServerMove_Validate);
	_dispatcher.subscribe(SML::HookLoader::Event::ServerCheckClientError, Events::ServerCheckClientError);
	
	_dispatcher.subscribe(SML::HookLoader::Event::DrawHUD, Events::OnDrawHUD);

	/// Register commands
	SML::mod_info(UtilityMod::name, "Registering commands...");

	UtilityMod::commandSystem.RegisterCommand("help", Commands::Help);
	UtilityMod::commandSystem.RegisterCommand("give", Commands::GiveItem);
	UtilityMod::commandSystem.RegisterCommand("fly", Commands::Fly);
	UtilityMod::commandSystem.RegisterCommand("god", Commands::God);
	//UtilityMod::commandSystem.RegisterCommand("settimedilation", Commands::SetTimeDilation);
	UtilityMod::commandSystem.RegisterCommand("creative", Commands::Creative);
	UtilityMod::commandSystem.RegisterCommand("creativepower", Commands::CreativePower);
	UtilityMod::commandSystem.RegisterCommand("unlockall", Commands::UnlockAllSchematics);
	UtilityMod::commandSystem.RegisterCommand("togglebuildrestriction", Commands::IgnoreBuildRestriction);
	UtilityMod::commandSystem.RegisterCommand("noclip", Commands::NoClip);
	UtilityMod::commandSystem.RegisterCommand("setdismantledelay", Commands::SetDismantleDelay);
	UtilityMod::commandSystem.RegisterCommand("time", Commands::Time);
	UtilityMod::commandSystem.RegisterCommand("locktime", Commands::LockTime);
	UtilityMod::commandSystem.RegisterCommand("heal", Commands::Heal);
	UtilityMod::commandSystem.RegisterCommand("resizeinv", Commands::ResizeInventory);
	UtilityMod::commandSystem.RegisterCommand("clearinv", Commands::ClearInventory);

	SML::mod_info(UtilityMod::name, "Initializing complete!");
}

void UtilityMod::Cleanup() {
	// hi
}
