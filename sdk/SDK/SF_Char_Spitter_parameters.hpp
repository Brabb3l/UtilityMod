#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Char_Spitter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Char_Spitter.Char_Spitter_C.GetAttackLocation
struct AChar_Spitter_C_GetAttackLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Char_Spitter.Char_Spitter_C.UpdateStrafeDirection
struct AChar_Spitter_C_UpdateStrafeDirection_Params
{
};

// Function Char_Spitter.Char_Spitter_C.StopStrafe
struct AChar_Spitter_C_StopStrafe_Params
{
};

// Function Char_Spitter.Char_Spitter_C.DoStrafe
struct AChar_Spitter_C_DoStrafe_Params
{
};

// Function Char_Spitter.Char_Spitter_C.StartStrafe
struct AChar_Spitter_C_StartStrafe_Params
{
};

// Function Char_Spitter.Char_Spitter_C.UserConstructionScript
struct AChar_Spitter_C_UserConstructionScript_Params
{
};

// Function Char_Spitter.Char_Spitter_C.ReceiveTick
struct AChar_Spitter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_Spitter.Char_Spitter_C.OnCurrentAggroTargetReplicated
struct AChar_Spitter_C_OnCurrentAggroTargetReplicated_Params
{
};

// Function Char_Spitter.Char_Spitter_C.ExecuteUbergraph_Char_Spitter
struct AChar_Spitter_C_ExecuteUbergraph_Char_Spitter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Char_Spitter.Char_Spitter_C.OnStrafeEnded__DelegateSignature
struct AChar_Spitter_C_OnStrafeEnded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
