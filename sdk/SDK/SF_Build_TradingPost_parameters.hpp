#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_TradingPost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_TradingPost.Build_TradingPost_C.GetActorCompassRepresentationType
struct ABuild_TradingPost_C_GetActorCompassRepresentationType_Params
{
	ECompassRepresentationType                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_TradingPost.Build_TradingPost_C.RemoveAsRepresentation
struct ABuild_TradingPost_C_RemoveAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_TradingPost.Build_TradingPost_C.GetRealActorRotation
struct ABuild_TradingPost_C_GetRealActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Build_TradingPost.Build_TradingPost_C.GetRealActorLocation
struct ABuild_TradingPost_C_GetRealActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Build_TradingPost.Build_TradingPost_C.GetActorCompassColor
struct ABuild_TradingPost_C_GetActorCompassColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Build_TradingPost.Build_TradingPost_C.GetActorShouldShowInComapss
struct ABuild_TradingPost_C_GetActorShouldShowInComapss_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_TradingPost.Build_TradingPost_C.GetActorShouldShowOnMap
struct ABuild_TradingPost_C_GetActorShouldShowOnMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_TradingPost.Build_TradingPost_C.AddAsRepresentation
struct ABuild_TradingPost_C_AddAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_TradingPost.Build_TradingPost_C.GetActorCompassText
struct ABuild_TradingPost_C_GetActorCompassText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Build_TradingPost.Build_TradingPost_C.GetActorCompassTexture
struct ABuild_TradingPost_C_GetActorCompassTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_TradingPost.Build_TradingPost_C.IsActorStatic
struct ABuild_TradingPost_C_IsActorStatic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_TradingPost.Build_TradingPost_C.UpdateTradingPostVisibility
struct ABuild_TradingPost_C_UpdateTradingPostVisibility_Params
{
};

// Function Build_TradingPost.Build_TradingPost_C.UpdateMainMesh
struct ABuild_TradingPost_C_UpdateMainMesh_Params
{
};

// Function Build_TradingPost.Build_TradingPost_C.UserConstructionScript
struct ABuild_TradingPost_C_UserConstructionScript_Params
{
};

// Function Build_TradingPost.Build_TradingPost_C.ReceiveDestroyed
struct ABuild_TradingPost_C_ReceiveDestroyed_Params
{
};

// Function Build_TradingPost.Build_TradingPost_C.ReceiveBeginPlay
struct ABuild_TradingPost_C_ReceiveBeginPlay_Params
{
};

// Function Build_TradingPost.Build_TradingPost_C.OnTradingPostUpgraded
struct ABuild_TradingPost_C_OnTradingPostUpgraded_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_TradingPost.Build_TradingPost_C.ExecuteUbergraph_Build_TradingPost
struct ABuild_TradingPost_C_ExecuteUbergraph_Build_TradingPost_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
