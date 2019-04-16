// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_MaterialEffect_SpaceElevator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MaterialEffect_SpaceElevator.BP_MaterialEffect_SpaceElevator_C.OnEnded
// ()

void UBP_MaterialEffect_SpaceElevator_C::OnEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MaterialEffect_SpaceElevator.BP_MaterialEffect_SpaceElevator_C.OnEnded");

	UBP_MaterialEffect_SpaceElevator_C_OnEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MaterialEffect_SpaceElevator.BP_MaterialEffect_SpaceElevator_C.OnStarted
// ()

void UBP_MaterialEffect_SpaceElevator_C::OnStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MaterialEffect_SpaceElevator.BP_MaterialEffect_SpaceElevator_C.OnStarted");

	UBP_MaterialEffect_SpaceElevator_C_OnStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MaterialEffect_SpaceElevator.BP_MaterialEffect_SpaceElevator_C.ExecuteUbergraph_BP_MaterialEffect_SpaceElevator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MaterialEffect_SpaceElevator_C::ExecuteUbergraph_BP_MaterialEffect_SpaceElevator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MaterialEffect_SpaceElevator.BP_MaterialEffect_SpaceElevator_C.ExecuteUbergraph_BP_MaterialEffect_SpaceElevator");

	UBP_MaterialEffect_SpaceElevator_C_ExecuteUbergraph_BP_MaterialEffect_SpaceElevator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
