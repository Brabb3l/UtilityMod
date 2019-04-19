// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_TimeTableActiveStationBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.GetPropertiesVisibility
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_TimeTableActiveStationBox_C::GetPropertiesVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.GetPropertiesVisibility");

	UWidget_TimeTableActiveStationBox_C_GetPropertiesVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.GetHoverFeedback
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_TimeTableActiveStationBox_C::GetHoverFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.GetHoverFeedback");

	UWidget_TimeTableActiveStationBox_C_GetHoverFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.GetStationNameText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_TimeTableActiveStationBox_C::GetStationNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.GetStationNameText");

	UWidget_TimeTableActiveStationBox_C_GetStationNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.BndEvt__mNewRemoveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// ()

void UWidget_TimeTableActiveStationBox_C::BndEvt__mNewRemoveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.BndEvt__mNewRemoveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_TimeTableActiveStationBox_C_BndEvt__mNewRemoveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.BndEvt__mDurationSpinBox_K2Node_ComponentBoundEvent_219_OnSpinBoxValueCommittedEvent__DelegateSignature
// ()
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TimeTableActiveStationBox_C::BndEvt__mDurationSpinBox_K2Node_ComponentBoundEvent_219_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.BndEvt__mDurationSpinBox_K2Node_ComponentBoundEvent_219_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UWidget_TimeTableActiveStationBox_C_BndEvt__mDurationSpinBox_K2Node_ComponentBoundEvent_219_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.ExecuteUbergraph_Widget_TimeTableActiveStationBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TimeTableActiveStationBox_C::ExecuteUbergraph_Widget_TimeTableActiveStationBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.ExecuteUbergraph_Widget_TimeTableActiveStationBox");

	UWidget_TimeTableActiveStationBox_C_ExecuteUbergraph_Widget_TimeTableActiveStationBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.OnDurationChanged__DelegateSignature
// ()
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TimeTableActiveStationBox_C::OnDurationChanged__DelegateSignature(int Index, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.OnDurationChanged__DelegateSignature");

	UWidget_TimeTableActiveStationBox_C_OnDurationChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.OnRemoveStopClicked__DelegateSignature
// ()
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TimeTableActiveStationBox_C::OnRemoveStopClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.OnRemoveStopClicked__DelegateSignature");

	UWidget_TimeTableActiveStationBox_C_OnRemoveStopClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
