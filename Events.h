#pragma once

#include <string>
#include <ModReturns.h>
#include "ExampleMod.h"

class Events {
public:
	static bool FirstCall;

	static void GetMessage(SML::ModReturns * returns, void * player, std::string message);
	static void OnKeyInput(SML::ModReturns* returns, void* input, void* key, void* event, float amountDepressed, bool gamepad);
	static void OnTakeDamage(SML::ModReturns* returns, void* healthComponent, void* damagedActor, float damageAmount, void* damageType, void* instigatedBy, void* damageCauser);
	static void WorldInit(SML::ModReturns* returns, void* controller);
	static void WireConnect(SML::ModReturns* returns, void* wire, void* first, void* second);
	static void BuildableSetResourceNode(SML::ModReturns* returns, void* buildable, void* node);
	static void ResourceNodeIsOccupied(SML::ModReturns* returns, void* node);
	static void CanConstructHologram(SML::ModReturns* returns, void* hologram);
	static void Tick(SML::ModReturns* returns, void* world, void* TickType, float DeltaSeconds);
	static void OnLoadObject(SML::ModReturns* returns, FString* PathName, PVOID funcpointer);
	static void OnDrawHUD(SML::ModReturns * returns, void * hudptr);
	static void ServerMove_Validate(SML::ModReturns * returns, void *movecomp, float ClientTimeStamp, float DeltaTime, void *Accel, void *RelativeClientLoc, void *ClientMovementBase, void* ClientBaseBoneName, char ClientMovementMode);
	static void ServerCheckClientError(SML::ModReturns * returns, void * movecomp, float ClientTimeStamp, float DeltaTime, void * Accel, void * ClientWorldLocation, void * RelativeClientLocation, void * ClientMovementBase, void * ClientBaseBoneName, char ClientMovementMode);
	static void WorkBenchCanProduce(SML::ModReturns * returns, void * workbench, void * recipe, void * inventory);
	static void PawnAddMovementInput(SML::ModReturns * returns, void * pawn, void * WorldDirection, float ScaleValue, bool bForce);
};