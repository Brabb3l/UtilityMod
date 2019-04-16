// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_Stilts_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Stilts.BP_Stilts_C.UserConstructionScript
// ()

void ABP_Stilts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Stilts.BP_Stilts_C.UserConstructionScript");

	ABP_Stilts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
