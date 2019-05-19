#pragma once

#include "sdk/SDK.hpp"

#include <map>

class Global {
public:
	static DWORD_PTR BaseAddress;
	static UWorld** m_UWorld;
	static ULevel* m_persistentLevel;
	static UGameInstance* m_owningGameInstance;
	static TArray<ULocalPlayer*> LocalPlayers;
	static ULocalPlayer* m_LocalPlayer;
	static TArray<AActor*>* m_Actors;
	static FVector2D ViewportSize;
	static AActor* currentPlayer;

	static std::map<std::string, UBlueprintGeneratedClass*> items;
	static std::map<std::string, UFont*> fonts;

	static void InitializeGlobals();
};

class Config {
public:
	static int flyHotkey, forwardkey, backwardkey, leftkey, rightkey, upkey, downkey, speedkey; // keycodes
	// fly stuff
	static double flyspeedmodemultiplier, baseflyspeed;
	static bool flyUseDeltaSeconds, smoothFly;
	static int fixedFrameRate;
	static float flyVelocityDamping;
};

class CommandStates {
public:
	static bool isFlying;
	static bool godMode;
	static bool creativeMode;
	static bool creativePowerMode;
	static bool ignoreBuildRestriction;
	static bool noClip;

	static bool unlockAllSchematicsConfirmation;

	static float flySpeed;

	static FVector targetVelocity;
};