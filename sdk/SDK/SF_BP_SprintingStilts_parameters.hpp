#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_SprintingStilts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SprintingStilts.BP_SprintingStilts_C.AdjustFallDamage
struct ABP_SprintingStilts_C_AdjustFallDamage_Params
{
	class AChar_Player_C*                              Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Equip;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.AdjustJumpHeight
struct ABP_SprintingStilts_C_AdjustJumpHeight_Params
{
	class AChar_Player_C*                              Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Equip;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.GetMaxSprintSpeed
struct ABP_SprintingStilts_C_GetMaxSprintSpeed_Params
{
	class AChar_Player_C*                              Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxSprintSpeed;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.GetMaxWalkSpeed
struct ABP_SprintingStilts_C_GetMaxWalkSpeed_Params
{
	class AChar_Player_C*                              Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.Undo1pOffset
struct ABP_SprintingStilts_C_Undo1pOffset_Params
{
	class AChar_Player_C*                              Player_Reference;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.DestroyStilts
struct ABP_SprintingStilts_C_DestroyStilts_Params
{
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.Spawn1pStilts
struct ABP_SprintingStilts_C_Spawn1pStilts_Params
{
	class AChar_Player_C*                              PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.AdjustMovementSpeed
struct ABP_SprintingStilts_C_AdjustMovementSpeed_Params
{
	class AChar_Player_C*                              PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Equip;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.UserConstructionScript
struct ABP_SprintingStilts_C_UserConstructionScript_Params
{
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.WasEquipped
struct ABP_SprintingStilts_C_WasEquipped_Params
{
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.WasUnEquipped
struct ABP_SprintingStilts_C_WasUnEquipped_Params
{
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.ReceiveBeginPlay
struct ABP_SprintingStilts_C_ReceiveBeginPlay_Params
{
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.TempDebug
struct ABP_SprintingStilts_C_TempDebug_Params
{
};

// Function BP_SprintingStilts.BP_SprintingStilts_C.ExecuteUbergraph_BP_SprintingStilts
struct ABP_SprintingStilts_C_ExecuteUbergraph_BP_SprintingStilts_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
