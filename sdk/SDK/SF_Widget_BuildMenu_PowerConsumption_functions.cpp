// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_BuildMenu_PowerConsumption_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_BuildMenu_PowerConsumption.Widget_BuildMenu_PowerConsumption_C.GetOrangeColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_BuildMenu_PowerConsumption_C::GetOrangeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_PowerConsumption.Widget_BuildMenu_PowerConsumption_C.GetOrangeColor");

	UWidget_BuildMenu_PowerConsumption_C_GetOrangeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenu_PowerConsumption.Widget_BuildMenu_PowerConsumption_C.GetDarkGrayText
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_BuildMenu_PowerConsumption_C::GetDarkGrayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_PowerConsumption.Widget_BuildMenu_PowerConsumption_C.GetDarkGrayText");

	UWidget_BuildMenu_PowerConsumption_C_GetDarkGrayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenu_PowerConsumption.Widget_BuildMenu_PowerConsumption_C.GetConsumptionVisibility
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_BuildMenu_PowerConsumption_C::GetConsumptionVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_PowerConsumption.Widget_BuildMenu_PowerConsumption_C.GetConsumptionVisibility");

	UWidget_BuildMenu_PowerConsumption_C_GetConsumptionVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenu_PowerConsumption.Widget_BuildMenu_PowerConsumption_C.GetPowerConsumptionText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_BuildMenu_PowerConsumption_C::GetPowerConsumptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_PowerConsumption.Widget_BuildMenu_PowerConsumption_C.GetPowerConsumptionText");

	UWidget_BuildMenu_PowerConsumption_C_GetPowerConsumptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
