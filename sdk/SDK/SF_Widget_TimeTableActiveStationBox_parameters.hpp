#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_TimeTableActiveStationBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.GetPropertiesVisibility
struct UWidget_TimeTableActiveStationBox_C_GetPropertiesVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.GetHoverFeedback
struct UWidget_TimeTableActiveStationBox_C_GetHoverFeedback_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.GetStationNameText
struct UWidget_TimeTableActiveStationBox_C_GetStationNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.BndEvt__mNewRemoveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWidget_TimeTableActiveStationBox_C_BndEvt__mNewRemoveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.BndEvt__mDurationSpinBox_K2Node_ComponentBoundEvent_219_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UWidget_TimeTableActiveStationBox_C_BndEvt__mDurationSpinBox_K2Node_ComponentBoundEvent_219_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.ExecuteUbergraph_Widget_TimeTableActiveStationBox
struct UWidget_TimeTableActiveStationBox_C_ExecuteUbergraph_Widget_TimeTableActiveStationBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.OnDurationChanged__DelegateSignature
struct UWidget_TimeTableActiveStationBox_C_OnDurationChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TimeTableActiveStationBox.Widget_TimeTableActiveStationBox_C.OnRemoveStopClicked__DelegateSignature
struct UWidget_TimeTableActiveStationBox_C_OnRemoveStopClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
