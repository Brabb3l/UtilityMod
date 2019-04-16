// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_FreightWagon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_FreightWagon.Widget_FreightWagon_C.DropInventorySlotStack
// ()
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WasStackMoved                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_FreightWagon_C::DropInventorySlotStack(class UWidget_InventorySlot_C** InventorySlot, bool* WasStackMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.DropInventorySlotStack");

	UWidget_FreightWagon_C_DropInventorySlotStack_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasStackMoved != nullptr)
		*WasStackMoved = params.WasStackMoved;
}


// Function Widget_FreightWagon.Widget_FreightWagon_C.UpdateHeaderText
// ()

void UWidget_FreightWagon_C::UpdateHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.UpdateHeaderText");

	UWidget_FreightWagon_C_UpdateHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_FreightWagon.Widget_FreightWagon_C.Init
// ()

void UWidget_FreightWagon_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.Init");

	UWidget_FreightWagon_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_FreightWagon.Widget_FreightWagon_C.CloseStorage
// ()

void UWidget_FreightWagon_C::CloseStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.CloseStorage");

	UWidget_FreightWagon_C_CloseStorage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_FreightWagon.Widget_FreightWagon_C.Construct
// ()

void UWidget_FreightWagon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.Construct");

	UWidget_FreightWagon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_FreightWagon.Widget_FreightWagon_C.ExecuteUbergraph_Widget_FreightWagon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_FreightWagon_C::ExecuteUbergraph_Widget_FreightWagon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FreightWagon.Widget_FreightWagon_C.ExecuteUbergraph_Widget_FreightWagon");

	UWidget_FreightWagon_C_ExecuteUbergraph_Widget_FreightWagon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
