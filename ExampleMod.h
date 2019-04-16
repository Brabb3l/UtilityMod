#pragma once

#include <other/BaseMod.h>
#include <utility/Connection.h>
#include <utility/Dispatcher.h>
#include <utility/Logger.h>
#include <other/CommandParser.h>
#include <other/CommandSystem.h>

class ExampleMod : SML::BaseMod {
public:
	SML::Globals* globalsReference;

	const char* Name() { 
		return "UtilityMod"; 
	};
	const char* Version() { 
		return "0.3.1"; 
	};
	const char* Description() { 
		return "Adds /give and /fly commands"; 
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
		globalsReference = globals;

		Setup();
	}

	void Cleanup();

protected:
	void Setup();
};

GLOBAL ExampleMod* CreateMod() {
	return new ExampleMod;
}