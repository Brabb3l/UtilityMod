#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_TimeTableMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.GetNumStops
struct UWidget_TimeTableMenu_C_GetNumStops_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.GenerateStopWidget
struct UWidget_TimeTableMenu_C_GenerateStopWidget_Params
{
	int                                                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.GetNumStations
struct UWidget_TimeTableMenu_C_GetNumStations_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.GenerateStationWidget
struct UWidget_TimeTableMenu_C_GenerateStationWidget_Params
{
	int                                                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.OnClose
struct UWidget_TimeTableMenu_C_OnClose_Params
{
};

// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.Construct
struct UWidget_TimeTableMenu_C_Construct_Params
{
};

// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.AddStop
struct UWidget_TimeTableMenu_C_AddStop_Params
{
	class AFGBuildableRailroadStation*                 Station;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.RemoveStop
struct UWidget_TimeTableMenu_C_RemoveStop_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.OnDurationChanged
struct UWidget_TimeTableMenu_C_OnDurationChanged_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.ExecuteUbergraph_Widget_TimeTableMenu
struct UWidget_TimeTableMenu_C_ExecuteUbergraph_Widget_TimeTableMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
