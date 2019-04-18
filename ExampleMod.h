#pragma once

//#include <algorithm>
//#include <stdio.h>
//#include <ctype.h>
//#include <math.h>
//#include <thread>

//#include <utility/Connection.h>
//#include <utility/Dispatcher.h>
#include <utility/Logger.h>
#include <utility/Configuration.h>

//#include <events/PlayerEvents.h>

//#include <other/CommandParser.h>
#include <other/CommandSystem.h>
#include <other/BaseMod.h>

//#include "sdk/SDK.hpp"

//#include "Internals.h"

//#include "Util.h"
//#include "Global.h"
//#include "Events.h"
//#include "Commands.h"

class ExampleMod : SML::BaseMod {
public:
	SML::Globals* globalsReference;

	const char* Name() { 
		return "UtilityMod"; 
	};
	const char* Version() { 
		return "0.3.3"; 
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

static ExampleMod* mod;
static SML::CommandSystem commandSystem;
static SML::Configuration* config;

GLOBAL ExampleMod* CreateMod() {
	return new ExampleMod;
}