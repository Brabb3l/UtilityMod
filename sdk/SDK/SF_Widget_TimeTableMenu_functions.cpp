// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_TimeTableMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.GetNumStops
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWidget_TimeTableMenu_C::GetNumStops()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.GetNumStops");

	UWidget_TimeTableMenu_C_GetNumStops_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.GenerateStopWidget
// ()
// Parameters:
// int                            Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWidget_TimeTableMenu_C::GenerateStopWidget(int Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.GenerateStopWidget");

	UWidget_TimeTableMenu_C_GenerateStopWidget_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.GetNumStations
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWidget_TimeTableMenu_C::GetNumStations()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.GetNumStations");

	UWidget_TimeTableMenu_C_GetNumStations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.GenerateStationWidget
// ()
// Parameters:
// int                            Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWidget_TimeTableMenu_C::GenerateStationWidget(int Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.GenerateStationWidget");

	UWidget_TimeTableMenu_C_GenerateStationWidget_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.OnClose
// ()

void UWidget_TimeTableMenu_C::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.OnClose");

	UWidget_TimeTableMenu_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.Construct
// ()

void UWidget_TimeTableMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.Construct");

	UWidget_TimeTableMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.AddStop
// ()
// Parameters:
// class AFGBuildableRailroadStation* Station                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TimeTableMenu_C::AddStop(class AFGBuildableRailroadStation* Station)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.AddStop");

	UWidget_TimeTableMenu_C_AddStop_Params params;
	params.Station = Station;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.RemoveStop
// ()
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TimeTableMenu_C::RemoveStop(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.RemoveStop");

	UWidget_TimeTableMenu_C_RemoveStop_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.OnDurationChanged
// ()
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TimeTableMenu_C::OnDurationChanged(int Index, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.OnDurationChanged");

	UWidget_TimeTableMenu_C_OnDurationChanged_Params params;
	params.Index = Index;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.ExecuteUbergraph_Widget_TimeTableMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TimeTableMenu_C::ExecuteUbergraph_Widget_TimeTableMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TimeTableMenu.Widget_TimeTableMenu_C.ExecuteUbergraph_Widget_TimeTableMenu");

	UWidget_TimeTableMenu_C_ExecuteUbergraph_Widget_TimeTableMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
