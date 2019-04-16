#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_BuildMenu_PowerConsumption_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_BuildMenu_PowerConsumption.Widget_BuildMenu_PowerConsumption_C.GetOrangeColor
struct UWidget_BuildMenu_PowerConsumption_C_GetOrangeColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Widget_BuildMenu_PowerConsumption.Widget_BuildMenu_PowerConsumption_C.GetDarkGrayText
struct UWidget_BuildMenu_PowerConsumption_C_GetDarkGrayText_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_BuildMenu_PowerConsumption.Widget_BuildMenu_PowerConsumption_C.GetConsumptionVisibility
struct UWidget_BuildMenu_PowerConsumption_C_GetConsumptionVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_BuildMenu_PowerConsumption.Widget_BuildMenu_PowerConsumption_C.GetPowerConsumptionText
struct UWidget_BuildMenu_PowerConsumption_C_GetPowerConsumptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
