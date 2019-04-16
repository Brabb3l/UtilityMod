// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_Converter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_Converter.Build_Converter_C.UserConstructionScript
// ()

void ABuild_Converter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_Converter.Build_Converter_C.UserConstructionScript");

	ABuild_Converter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
