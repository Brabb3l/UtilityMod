#pragma once

#include <utility/Logger.h>
#include <utility/Configuration.h>

#include <other/CommandSystem.h>
#include <other/BaseMod.h>

class UtilityMod : SML::BaseMod {
public:
	SML::Globals* globalsReference;

	static const char* name;

	static UtilityMod* mod;
	static SML::CommandSystem commandSystem;
	static SML::Configuration config;

	const char* Name() {
		return name;
	};
	const char* Version() { 
		return "0.4.0"; 
	};
	const char* Description() { 
		return "Adds several commands"; 
	};
	const char* Authors() { 
		return "Brabb3l"; 
	};
	virtual const std::vector<const char*> Dependencies() {
		return std::vector<const char*>{
			// list here
		};
	}

	void PreSetup(SML::Globals* globals) {
		SML::mod_info(Name(), "Setting up ", Name());
		SML::mod_info(Name(), "Mod created by Brabb3l");
		globalsReference = globals;

		Setup();
	}

	void Cleanup();

protected:
	void Setup();
};

GLOBAL UtilityMod* CreateMod();