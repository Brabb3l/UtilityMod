// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Char_Spitter_Alternative_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.GetAttackLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AChar_Spitter_Alternative_C::GetAttackLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.GetAttackLocation");

	AChar_Spitter_Alternative_C_GetAttackLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.UpdateStrafeDirection
// ()

void AChar_Spitter_Alternative_C::UpdateStrafeDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.UpdateStrafeDirection");

	AChar_Spitter_Alternative_C_UpdateStrafeDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.StopStrafe
// ()

void AChar_Spitter_Alternative_C::StopStrafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.StopStrafe");

	AChar_Spitter_Alternative_C_StopStrafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.DoStrafe
// ()

void AChar_Spitter_Alternative_C::DoStrafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.DoStrafe");

	AChar_Spitter_Alternative_C_DoStrafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.StartStrafe
// ()

void AChar_Spitter_Alternative_C::StartStrafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.StartStrafe");

	AChar_Spitter_Alternative_C_StartStrafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.UserConstructionScript
// ()

void AChar_Spitter_Alternative_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.UserConstructionScript");

	AChar_Spitter_Alternative_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_Spitter_Alternative_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.ReceiveTick");

	AChar_Spitter_Alternative_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.OnCurrentAggroTargetReplicated
// ()

void AChar_Spitter_Alternative_C::OnCurrentAggroTargetReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.OnCurrentAggroTargetReplicated");

	AChar_Spitter_Alternative_C_OnCurrentAggroTargetReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.ExecuteUbergraph_Char_Spitter_Alternative
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChar_Spitter_Alternative_C::ExecuteUbergraph_Char_Spitter_Alternative(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.ExecuteUbergraph_Char_Spitter_Alternative");

	AChar_Spitter_Alternative_C_ExecuteUbergraph_Char_Spitter_Alternative_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.OnStrafeEnded__DelegateSignature
// ()

void AChar_Spitter_Alternative_C::OnStrafeEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Char_Spitter_Alternative.Char_Spitter_Alternative_C.OnStrafeEnded__DelegateSignature");

	AChar_Spitter_Alternative_C_OnStrafeEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
