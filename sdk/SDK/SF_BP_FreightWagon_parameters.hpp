#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_FreightWagon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FreightWagon.BP_FreightWagon_C.GetActorCompassRepresentationType
struct ABP_FreightWagon_C_GetActorCompassRepresentationType_Params
{
	ECompassRepresentationType                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FreightWagon.BP_FreightWagon_C.AddAsRepresentation
struct ABP_FreightWagon_C_AddAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FreightWagon.BP_FreightWagon_C.GetActorCompassColor
struct ABP_FreightWagon_C_GetActorCompassColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_FreightWagon.BP_FreightWagon_C.GetActorCompassText
struct ABP_FreightWagon_C_GetActorCompassText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_FreightWagon.BP_FreightWagon_C.GetActorCompassTexture
struct ABP_FreightWagon_C_GetActorCompassTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FreightWagon.BP_FreightWagon_C.GetActorShouldShowInComapss
struct ABP_FreightWagon_C_GetActorShouldShowInComapss_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FreightWagon.BP_FreightWagon_C.GetActorShouldShowOnMap
struct ABP_FreightWagon_C_GetActorShouldShowOnMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FreightWagon.BP_FreightWagon_C.GetRealActorLocation
struct ABP_FreightWagon_C_GetRealActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_FreightWagon.BP_FreightWagon_C.GetRealActorRotation
struct ABP_FreightWagon_C_GetRealActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_FreightWagon.BP_FreightWagon_C.IsActorStatic
struct ABP_FreightWagon_C_IsActorStatic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FreightWagon.BP_FreightWagon_C.RemoveAsRepresentation
struct ABP_FreightWagon_C_RemoveAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FreightWagon.BP_FreightWagon_C.UserConstructionScript
struct ABP_FreightWagon_C_UserConstructionScript_Params
{
};

// Function BP_FreightWagon.BP_FreightWagon_C.OnUse
struct ABP_FreightWagon_C_OnUse_Params
{
	class AFGCharacterPlayer**                         byCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUseState*                                  State;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_FreightWagon.BP_FreightWagon_C.ReceiveBeginPlay
struct ABP_FreightWagon_C_ReceiveBeginPlay_Params
{
};

// Function BP_FreightWagon.BP_FreightWagon_C.ReceiveDestroyed
struct ABP_FreightWagon_C_ReceiveDestroyed_Params
{
};

// Function BP_FreightWagon.BP_FreightWagon_C.ExecuteUbergraph_BP_FreightWagon
struct ABP_FreightWagon_C_ExecuteUbergraph_BP_FreightWagon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
