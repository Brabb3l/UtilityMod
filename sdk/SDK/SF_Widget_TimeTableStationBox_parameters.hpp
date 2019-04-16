#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_TimeTableStationBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.GetHoverFeedback
struct UWidget_TimeTableStationBox_C_GetHoverFeedback_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.GetStationNameText
struct UWidget_TimeTableStationBox_C_GetStationNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.BndEvt__mNewAddButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_TimeTableStationBox_C_BndEvt__mNewAddButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.ExecuteUbergraph_Widget_TimeTableStationBox
struct UWidget_TimeTableStationBox_C_ExecuteUbergraph_Widget_TimeTableStationBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TimeTableStationBox.Widget_TimeTableStationBox_C.OnAddStopClicked__DelegateSignature
struct UWidget_TimeTableStationBox_C_OnAddStopClicked__DelegateSignature_Params
{
	class AFGBuildableRailroadStation*                 Station;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
