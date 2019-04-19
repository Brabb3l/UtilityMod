#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_C4Explosive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_C4Explosive.BP_C4Explosive_C.ShouldSave
struct ABP_C4Explosive_C_ShouldSave_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_C4Explosive.BP_C4Explosive_C.GatherDependencies
struct ABP_C4Explosive_C_GatherDependencies_Params
{
	TArray<class UObject*>                             out_dependentObjects;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_C4Explosive.BP_C4Explosive_C.NeedTransform
struct ABP_C4Explosive_C_NeedTransform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_C4Explosive.BP_C4Explosive_C.UserConstructionScript
struct ABP_C4Explosive_C_UserConstructionScript_Params
{
};

// Function BP_C4Explosive.BP_C4Explosive_C.PostLoadGame
struct ABP_C4Explosive_C_PostLoadGame_Params
{
	int                                                SaveVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_C4Explosive.BP_C4Explosive_C.PostSaveGame
struct ABP_C4Explosive_C_PostSaveGame_Params
{
	int                                                SaveVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_C4Explosive.BP_C4Explosive_C.PreLoadGame
struct ABP_C4Explosive_C_PreLoadGame_Params
{
	int                                                SaveVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_C4Explosive.BP_C4Explosive_C.PreSaveGame
struct ABP_C4Explosive_C_PreSaveGame_Params
{
	int                                                SaveVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameVersion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_C4Explosive.BP_C4Explosive_C.PlayExplosionEffects
struct ABP_C4Explosive_C_PlayExplosionEffects_Params
{
};

// Function BP_C4Explosive.BP_C4Explosive_C.ExecuteUbergraph_BP_C4Explosive
struct ABP_C4Explosive_C_ExecuteUbergraph_BP_C4Explosive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
