#include "stdafx.h"

#include "Global.h"

#include "ExampleMod.h"

void Global::InitializeGlobals() {
	if ((*Global::m_UWorld) == nullptr) {
		SML::mod_warning(UtilityMod::name, "World not found!");
		return;
	}

	Global::m_persistentLevel = (*Global::m_UWorld)->PersistentLevel;
	Global::m_owningGameInstance = (*Global::m_UWorld)->OwningGameInstance;
	Global::LocalPlayers = Global::m_owningGameInstance->LocalPlayers;
	Global::m_LocalPlayer = Global::LocalPlayers[0];
	Global::m_Actors = &Global::m_persistentLevel->AActors;
}

// Global defines
DWORD_PTR Global::BaseAddress;
UWorld** Global::m_UWorld;
ULevel* Global::m_persistentLevel;
UGameInstance* Global::m_owningGameInstance;
TArray<ULocalPlayer*> Global::LocalPlayers;
ULocalPlayer* Global::m_LocalPlayer;
TArray<AActor*>* Global::m_Actors;
FVector2D Global::ViewportSize;
AActor* Global::currentPlayer;
std::map<std::string, UBlueprintGeneratedClass*> Global::items;
std::map<std::string, UFont*> Global::fonts;

// Config defines
int Config::flyHotkey, Config::forwardkey, Config::backwardkey, Config::leftkey, Config::rightkey, Config::upkey, Config::downkey, Config::speedkey; // keycodes
// Fly stuff
double Config::flyspeedmodemultiplier, Config::baseflyspeed;
bool Config::flyUseDeltaSeconds, Config::smoothFly;
int Config::fixedFrameRate;
float Config::flyVelocityDamping;

// CommandStates defines
bool CommandStates::isFlying = false;
bool CommandStates::godMode = false;
bool CommandStates::creativeMode = false;
bool CommandStates::creativePowerMode = false;
bool CommandStates::ignoreBuildRestriction = false;
bool CommandStates::noClip = false;
bool CommandStates::unlockAllSchematicsConfirmation = false;
float CommandStates::flySpeed = 1;
FVector CommandStates::targetVelocity = FVector();