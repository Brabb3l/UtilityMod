#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_Crate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Crate.BP_Crate_C.AddAsRepresentation
struct ABP_Crate_C_AddAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.GetActorCompassColor
struct ABP_Crate_C_GetActorCompassColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.GetActorCompassRepresentationType
struct ABP_Crate_C_GetActorCompassRepresentationType_Params
{
	ECompassRepresentationType                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.GetActorCompassText
struct ABP_Crate_C_GetActorCompassText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Crate.BP_Crate_C.GetActorCompassTexture
struct ABP_Crate_C_GetActorCompassTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.GetActorShouldShowInComapss
struct ABP_Crate_C_GetActorShouldShowInComapss_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.GetActorShouldShowOnMap
struct ABP_Crate_C_GetActorShouldShowOnMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.GetRealActorLocation
struct ABP_Crate_C_GetRealActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.GetRealActorRotation
struct ABP_Crate_C_GetRealActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.IsActorStatic
struct ABP_Crate_C_IsActorStatic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.RemoveAsRepresentation
struct ABP_Crate_C_RemoveAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.UserConstructionScript
struct ABP_Crate_C_UserConstructionScript_Params
{
};

// Function BP_Crate.BP_Crate_C.StartIsLookedAt
struct ABP_Crate_C_StartIsLookedAt_Params
{
	class AFGCharacterPlayer**                         byCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUseState*                                  State;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Crate.BP_Crate_C.StopIsLookedAt
struct ABP_Crate_C_StopIsLookedAt_Params
{
	class AFGCharacterPlayer**                         byCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUseState*                                  State;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Crate.BP_Crate_C.OnUse
struct ABP_Crate_C_OnUse_Params
{
	class AFGCharacterPlayer**                         byCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUseState*                                  State;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Crate.BP_Crate_C.SwitchHUD
struct ABP_Crate_C_SwitchHUD_Params
{
	class AFGCharacterPlayer*                          byCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.OnRequestReprecentMarker
struct ABP_Crate_C_OnRequestReprecentMarker_Params
{
};

// Function BP_Crate.BP_Crate_C.ReceiveEndPlay
struct ABP_Crate_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.ReceiveBeginPlay
struct ABP_Crate_C_ReceiveBeginPlay_Params
{
};

// Function BP_Crate.BP_Crate_C.checkForClearAndRemove
struct ABP_Crate_C_checkForClearAndRemove_Params
{
	class UClass*                                      ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                numRemoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Crate.BP_Crate_C.ExecuteUbergraph_BP_Crate
struct ABP_Crate_C_ExecuteUbergraph_BP_Crate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
