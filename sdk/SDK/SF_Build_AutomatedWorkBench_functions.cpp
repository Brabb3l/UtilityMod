// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_AutomatedWorkBench_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_AutomatedWorkBench.Build_AutomatedWorkBench_C.UserConstructionScript
// ()

void ABuild_AutomatedWorkBench_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_AutomatedWorkBench.Build_AutomatedWorkBench_C.UserConstructionScript");

	ABuild_AutomatedWorkBench_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
