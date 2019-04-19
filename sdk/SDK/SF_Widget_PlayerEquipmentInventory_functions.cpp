// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_PlayerEquipmentInventory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C.Construct
// ()

void UWidget_PlayerEquipmentInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C.Construct");

	UWidget_PlayerEquipmentInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C.ExecuteUbergraph_Widget_PlayerEquipmentInventory
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerEquipmentInventory_C::ExecuteUbergraph_Widget_PlayerEquipmentInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C.ExecuteUbergraph_Widget_PlayerEquipmentInventory");

	UWidget_PlayerEquipmentInventory_C_ExecuteUbergraph_Widget_PlayerEquipmentInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
