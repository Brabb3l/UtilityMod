// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_QuantumEncoder_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_QuantumEncoder.Build_QuantumEncoder_C.UserConstructionScript
// ()

void ABuild_QuantumEncoder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_QuantumEncoder.Build_QuantumEncoder_C.UserConstructionScript");

	ABuild_QuantumEncoder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_QuantumEncoder.Build_QuantumEncoder_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_QuantumEncoder_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_QuantumEncoder.Build_QuantumEncoder_C.ReceiveTick");

	ABuild_QuantumEncoder_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_QuantumEncoder.Build_QuantumEncoder_C.ReceiveBeginPlay
// ()

void ABuild_QuantumEncoder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_QuantumEncoder.Build_QuantumEncoder_C.ReceiveBeginPlay");

	ABuild_QuantumEncoder_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_QuantumEncoder.Build_QuantumEncoder_C.ExecuteUbergraph_Build_QuantumEncoder
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_QuantumEncoder_C::ExecuteUbergraph_Build_QuantumEncoder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_QuantumEncoder.Build_QuantumEncoder_C.ExecuteUbergraph_Build_QuantumEncoder");

	ABuild_QuantumEncoder_C_ExecuteUbergraph_Build_QuantumEncoder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
