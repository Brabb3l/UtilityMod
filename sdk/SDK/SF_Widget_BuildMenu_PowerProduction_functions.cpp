// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_BuildMenu_PowerProduction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C.GetProductionVisibility
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_BuildMenu_PowerProduction_C::GetProductionVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C.GetProductionVisibility");

	UWidget_BuildMenu_PowerProduction_C_GetProductionVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C.GetPowerProductionText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_BuildMenu_PowerProduction_C::GetPowerProductionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C.GetPowerProductionText");

	UWidget_BuildMenu_PowerProduction_C_GetPowerProductionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C.GetOrangeColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_BuildMenu_PowerProduction_C::GetOrangeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C.GetOrangeColor");

	UWidget_BuildMenu_PowerProduction_C_GetOrangeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C.GetDarkGrayText
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_BuildMenu_PowerProduction_C::GetDarkGrayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C.GetDarkGrayText");

	UWidget_BuildMenu_PowerProduction_C_GetDarkGrayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
