#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_DeathMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DeathMarker.BP_DeathMarker_C.ShouldSave
struct ABP_DeathMarker_C_ShouldSave_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.GatherDependencies
struct ABP_DeathMarker_C_GatherDependencies_Params
{
	TArray<class UObject*>                             out_dependentObjects;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_DeathMarker.BP_DeathMarker_C.NeedTransform
struct ABP_DeathMarker_C_NeedTransform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.GetActorCompassRepresentationType
struct ABP_DeathMarker_C_GetActorCompassRepresentationType_Params
{
	ECompassRepresentationType                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.AddAsRepresentation
struct ABP_DeathMarker_C_AddAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.GetActorCompassColor
struct ABP_DeathMarker_C_GetActorCompassColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.GetActorCompassText
struct ABP_DeathMarker_C_GetActorCompassText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_DeathMarker.BP_DeathMarker_C.GetActorCompassTexture
struct ABP_DeathMarker_C_GetActorCompassTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.GetActorShouldShowInComapss
struct ABP_DeathMarker_C_GetActorShouldShowInComapss_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.GetActorShouldShowOnMap
struct ABP_DeathMarker_C_GetActorShouldShowOnMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.GetRealActorLocation
struct ABP_DeathMarker_C_GetRealActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.GetRealActorRotation
struct ABP_DeathMarker_C_GetRealActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.IsActorStatic
struct ABP_DeathMarker_C_IsActorStatic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.RemoveAsRepresentation
struct ABP_DeathMarker_C_RemoveAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.UserConstructionScript
struct ABP_DeathMarker_C_UserConstructionScript_Params
{
};

// Function BP_DeathMarker.BP_DeathMarker_C.PostLoadGame
struct ABP_DeathMarker_C_PostLoadGame_Params
{
	int                                                SaveVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.PostSaveGame
struct ABP_DeathMarker_C_PostSaveGame_Params
{
	int                                                SaveVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.PreLoadGame
struct ABP_DeathMarker_C_PreLoadGame_Params
{
	int                                                SaveVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.PreSaveGame
struct ABP_DeathMarker_C_PreSaveGame_Params
{
	int                                                SaveVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.ReceiveBeginPlay
struct ABP_DeathMarker_C_ReceiveBeginPlay_Params
{
};

// Function BP_DeathMarker.BP_DeathMarker_C.ReceiveDestroyed
struct ABP_DeathMarker_C_ReceiveDestroyed_Params
{
};

// Function BP_DeathMarker.BP_DeathMarker_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DeathMarker_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DeathMarker.BP_DeathMarker_C.ExecuteUbergraph_BP_DeathMarker
struct ABP_DeathMarker_C_ExecuteUbergraph_BP_DeathMarker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
