// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Equip_C4Dispenser_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_C4Dispenser.Equip_C4Dispenser_C.UserConstructionScript
// ()

void AEquip_C4Dispenser_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_C4Dispenser.Equip_C4Dispenser_C.UserConstructionScript");

	AEquip_C4Dispenser_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
