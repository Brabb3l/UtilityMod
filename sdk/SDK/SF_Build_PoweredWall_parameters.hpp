#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_PoweredWall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_PoweredWall.Build_PoweredWall_C.GetFoundationConnection
struct ABuild_PoweredWall_C_GetFoundationConnection_Params
{
	class UFGPowerConnectionComponent*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Build_PoweredWall.Build_PoweredWall_C.UserConstructionScript
struct ABuild_PoweredWall_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
