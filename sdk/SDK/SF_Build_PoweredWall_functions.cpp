// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_PoweredWall_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_PoweredWall.Build_PoweredWall_C.GetFoundationConnection
// ()
// Parameters:
// class UFGPowerConnectionComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFGPowerConnectionComponent* ABuild_PoweredWall_C::GetFoundationConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PoweredWall.Build_PoweredWall_C.GetFoundationConnection");

	ABuild_PoweredWall_C_GetFoundationConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_PoweredWall.Build_PoweredWall_C.UserConstructionScript
// ()

void ABuild_PoweredWall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PoweredWall.Build_PoweredWall_C.UserConstructionScript");

	ABuild_PoweredWall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
