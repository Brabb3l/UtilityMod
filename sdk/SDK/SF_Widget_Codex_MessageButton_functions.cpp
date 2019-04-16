// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_Codex_MessageButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.WasMessageReadColorFeedback
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_Codex_MessageButton_C::WasMessageReadColorFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.WasMessageReadColorFeedback");

	UWidget_Codex_MessageButton_C_WasMessageReadColorFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.WasMessageReadFeedbackVisibility
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_Codex_MessageButton_C::WasMessageReadFeedbackVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.WasMessageReadFeedbackVisibility");

	UWidget_Codex_MessageButton_C_WasMessageReadFeedbackVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.GetSelectedMessageFeedbackVisibility
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_Codex_MessageButton_C::GetSelectedMessageFeedbackVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.GetSelectedMessageFeedbackVisibility");

	UWidget_Codex_MessageButton_C_GetSelectedMessageFeedbackVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.MessageWasClicked
// ()

void UWidget_Codex_MessageButton_C::MessageWasClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.MessageWasClicked");

	UWidget_Codex_MessageButton_C_MessageWasClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.GetMessageName
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Codex_MessageButton_C::GetMessageName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.GetMessageName");

	UWidget_Codex_MessageButton_C_GetMessageName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.BndEvt__mMessageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// ()

void UWidget_Codex_MessageButton_C::BndEvt__mMessageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.BndEvt__mMessageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWidget_Codex_MessageButton_C_BndEvt__mMessageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.BndEvt__mMessageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// ()

void UWidget_Codex_MessageButton_C::BndEvt__mMessageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.BndEvt__mMessageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWidget_Codex_MessageButton_C_BndEvt__mMessageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.ExecuteUbergraph_Widget_Codex_MessageButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Codex_MessageButton_C::ExecuteUbergraph_Widget_Codex_MessageButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.ExecuteUbergraph_Widget_Codex_MessageButton");

	UWidget_Codex_MessageButton_C_ExecuteUbergraph_Widget_Codex_MessageButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.OnClicked__DelegateSignature
// ()

void UWidget_Codex_MessageButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.OnClicked__DelegateSignature");

	UWidget_Codex_MessageButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
