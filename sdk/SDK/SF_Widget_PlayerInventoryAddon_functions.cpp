// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_PlayerInventoryAddon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnInventorySlotMoveStack
// ()
// Parameters:
// class UWidget_InventorySlot_C* InventorySlotSender            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::OnInventorySlotMoveStack(class UWidget_InventorySlot_C* InventorySlotSender)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnInventorySlotMoveStack");

	UWidget_PlayerInventoryAddon_C_OnInventorySlotMoveStack_Params params;
	params.InventorySlotSender = InventorySlotSender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetupInventoryResize
// ()

void UWidget_PlayerInventoryAddon_C::SetupInventoryResize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetupInventoryResize");

	UWidget_PlayerInventoryAddon_C_SetupInventoryResize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.IsInventorySizeOutdated
// ()
// Parameters:
// bool                           isOutdated                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::IsInventorySizeOutdated(bool* isOutdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.IsInventorySizeOutdated");

	UWidget_PlayerInventoryAddon_C_IsInventorySizeOutdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isOutdated != nullptr)
		*isOutdated = params.isOutdated;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetInventoryComponents
// ()
// Parameters:
// class UFGInventoryComponent*   inventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFGInventoryComponent*   trash                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::SetInventoryComponents(class UFGInventoryComponent* inventoryComponent, class UFGInventoryComponent* trash)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetInventoryComponents");

	UWidget_PlayerInventoryAddon_C_SetInventoryComponents_Params params;
	params.inventoryComponent = inventoryComponent;
	params.trash = trash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Construct
// ()

void UWidget_PlayerInventoryAddon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Construct");

	UWidget_PlayerInventoryAddon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SubscribeToParentWindow
// ()
// Parameters:
// class UWidget_Window_C*        ParentWindow                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::SubscribeToParentWindow(class UWidget_Window_C* ParentWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SubscribeToParentWindow");

	UWidget_PlayerInventoryAddon_C_SubscribeToParentWindow_Params params;
	params.ParentWindow = ParentWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// ()

void UWidget_PlayerInventoryAddon_C::BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_PlayerInventoryAddon_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ExecuteUbergraph_Widget_PlayerInventoryAddon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::ExecuteUbergraph_Widget_PlayerInventoryAddon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ExecuteUbergraph_Widget_PlayerInventoryAddon");

	UWidget_PlayerInventoryAddon_C_ExecuteUbergraph_Widget_PlayerInventoryAddon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SlotStackMoveEvent__DelegateSignature
// ()
// Parameters:
// class UWidget_InventorySlot_C* InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EInteractionDirection> Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::SlotStackMoveEvent__DelegateSignature(class UWidget_InventorySlot_C* InventorySlot, TEnumAsByte<EInteractionDirection> Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SlotStackMoveEvent__DelegateSignature");

	UWidget_PlayerInventoryAddon_C_SlotStackMoveEvent__DelegateSignature_Params params;
	params.InventorySlot = InventorySlot;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
