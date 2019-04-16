#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_SpaceElevator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_SpaceElevator.Build_SpaceElevator_C.UserConstructionScript
struct ABuild_SpaceElevator_C_UserConstructionScript_Params
{
};

// Function Build_SpaceElevator.Build_SpaceElevator_C.CamShake_01
struct ABuild_SpaceElevator_C_CamShake_01_Params
{
};

// Function Build_SpaceElevator.Build_SpaceElevator_C.CamShake_02
struct ABuild_SpaceElevator_C_CamShake_02_Params
{
};

// Function Build_SpaceElevator.Build_SpaceElevator_C.CamShake_03
struct ABuild_SpaceElevator_C_CamShake_03_Params
{
};

// Function Build_SpaceElevator.Build_SpaceElevator_C.CamShake_04
struct ABuild_SpaceElevator_C_CamShake_04_Params
{
};

// Function Build_SpaceElevator.Build_SpaceElevator_C.UpperlineVisible
struct ABuild_SpaceElevator_C_UpperlineVisible_Params
{
};

// Function Build_SpaceElevator.Build_SpaceElevator_C.Event_StartSound
struct ABuild_SpaceElevator_C_Event_StartSound_Params
{
};

// Function Build_SpaceElevator.Build_SpaceElevator_C.ReceiveBeginPlay
struct ABuild_SpaceElevator_C_ReceiveBeginPlay_Params
{
};

// Function Build_SpaceElevator.Build_SpaceElevator_C.OnPhaseChanged
struct ABuild_SpaceElevator_C_OnPhaseChanged_Params
{
	TEnumAsByte<EGamePhase>                            gamePhase;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_SpaceElevator.Build_SpaceElevator_C.PlayUpgradeSequence
struct ABuild_SpaceElevator_C_PlayUpgradeSequence_Params
{
};

// Function Build_SpaceElevator.Build_SpaceElevator_C.Event_SE_SendOff
struct ABuild_SpaceElevator_C_Event_SE_SendOff_Params
{
};

// Function Build_SpaceElevator.Build_SpaceElevator_C.ReceiveDestroyed
struct ABuild_SpaceElevator_C_ReceiveDestroyed_Params
{
};

// Function Build_SpaceElevator.Build_SpaceElevator_C.ExecuteUbergraph_Build_SpaceElevator
struct ABuild_SpaceElevator_C_ExecuteUbergraph_Build_SpaceElevator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
