// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_VehicleTargetPoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.Construct
// ()

void UWidget_VehicleTargetPoint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.Construct");

	UWidget_VehicleTargetPoint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.OnDeleteClicked
// ()

void UWidget_VehicleTargetPoint_C::OnDeleteClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.OnDeleteClicked");

	UWidget_VehicleTargetPoint_C_OnDeleteClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.DoDeleteNode
// ()
// Parameters:
// bool                           ConfirmClicked                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_VehicleTargetPoint_C::DoDeleteNode(bool ConfirmClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.DoDeleteNode");

	UWidget_VehicleTargetPoint_C_DoDeleteNode_Params params;
	params.ConfirmClicked = ConfirmClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.Init
// ()

void UWidget_VehicleTargetPoint_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.Init");

	UWidget_VehicleTargetPoint_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.Destruct
// ()

void UWidget_VehicleTargetPoint_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.Destruct");

	UWidget_VehicleTargetPoint_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// ()

void UWidget_VehicleTargetPoint_C::BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_VehicleTargetPoint_C_BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.ExecuteUbergraph_Widget_VehicleTargetPoint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_VehicleTargetPoint_C::ExecuteUbergraph_Widget_VehicleTargetPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.ExecuteUbergraph_Widget_VehicleTargetPoint");

	UWidget_VehicleTargetPoint_C_ExecuteUbergraph_Widget_VehicleTargetPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
