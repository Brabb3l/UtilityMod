// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_TimeTableStationBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.GetHoverFeedback
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_TimeTableStationBox_C::GetHoverFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.GetHoverFeedback");

	UWidget_TimeTableStationBox_C_GetHoverFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.GetStationNameText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_TimeTableStationBox_C::GetStationNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.GetStationNameText");

	UWidget_TimeTableStationBox_C_GetStationNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.BndEvt__mNewAddButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// ()

void UWidget_TimeTableStationBox_C::BndEvt__mNewAddButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.BndEvt__mNewAddButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_TimeTableStationBox_C_BndEvt__mNewAddButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.ExecuteUbergraph_Widget_TimeTableStationBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TimeTableStationBox_C::ExecuteUbergraph_Widget_TimeTableStationBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.ExecuteUbergraph_Widget_TimeTableStationBox");

	UWidget_TimeTableStationBox_C_ExecuteUbergraph_Widget_TimeTableStationBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.OnAddStopClicked__DelegateSignature
// ()
// Parameters:
// class AFGBuildableRailroadStation* Station                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TimeTableStationBox_C::OnAddStopClicked__DelegateSignature(class AFGBuildableRailroadStation* Station)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.OnAddStopClicked__DelegateSignature");

	UWidget_TimeTableStationBox_C_OnAddStopClicked__DelegateSignature_Params params;
	params.Station = Station;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
