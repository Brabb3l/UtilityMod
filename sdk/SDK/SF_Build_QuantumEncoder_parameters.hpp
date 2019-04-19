#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_QuantumEncoder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_QuantumEncoder.Build_QuantumEncoder_C.UserConstructionScript
struct ABuild_QuantumEncoder_C_UserConstructionScript_Params
{
};

// Function Build_QuantumEncoder.Build_QuantumEncoder_C.ReceiveTick
struct ABuild_QuantumEncoder_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_QuantumEncoder.Build_QuantumEncoder_C.ReceiveBeginPlay
struct ABuild_QuantumEncoder_C_ReceiveBeginPlay_Params
{
};

// Function Build_QuantumEncoder.Build_QuantumEncoder_C.ExecuteUbergraph_Build_QuantumEncoder
struct ABuild_QuantumEncoder_C_ExecuteUbergraph_Build_QuantumEncoder_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
