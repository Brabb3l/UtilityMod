// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_ResourceDeposit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ResourceDeposit.BP_ResourceDeposit_C.UserConstructionScript
// ()

void ABP_ResourceDeposit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ResourceDeposit.BP_ResourceDeposit_C.UserConstructionScript");

	ABP_ResourceDeposit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ResourceDeposit.BP_ResourceDeposit_C.ReceiveBeginPlay
// ()

void ABP_ResourceDeposit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ResourceDeposit.BP_ResourceDeposit_C.ReceiveBeginPlay");

	ABP_ResourceDeposit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ResourceDeposit.BP_ResourceDeposit_C.PlayDepletedEffect
// ()
// Parameters:
// class UClass**                 descriptor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ResourceDeposit_C::PlayDepletedEffect(class UClass** descriptor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ResourceDeposit.BP_ResourceDeposit_C.PlayDepletedEffect");

	ABP_ResourceDeposit_C_PlayDepletedEffect_Params params;
	params.descriptor = descriptor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ResourceDeposit.BP_ResourceDeposit_C.ExecuteUbergraph_BP_ResourceDeposit
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ResourceDeposit_C::ExecuteUbergraph_BP_ResourceDeposit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ResourceDeposit.BP_ResourceDeposit_C.ExecuteUbergraph_BP_ResourceDeposit");

	ABP_ResourceDeposit_C_ExecuteUbergraph_BP_ResourceDeposit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
