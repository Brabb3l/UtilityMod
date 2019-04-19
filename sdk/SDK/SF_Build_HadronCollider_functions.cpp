// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_HadronCollider_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_HadronCollider.Build_HadronCollider_C.UserConstructionScript
// ()

void ABuild_HadronCollider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_HadronCollider.Build_HadronCollider_C.UserConstructionScript");

	ABuild_HadronCollider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_HadronCollider.Build_HadronCollider_C.ReceiveBeginPlay
// ()

void ABuild_HadronCollider_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_HadronCollider.Build_HadronCollider_C.ReceiveBeginPlay");

	ABuild_HadronCollider_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_HadronCollider.Build_HadronCollider_C.ExecuteUbergraph_Build_HadronCollider
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_HadronCollider_C::ExecuteUbergraph_Build_HadronCollider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_HadronCollider.Build_HadronCollider_C.ExecuteUbergraph_Build_HadronCollider");

	ABuild_HadronCollider_C_ExecuteUbergraph_Build_HadronCollider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
