#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_BuildMenu_PowerProduction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C.GetProductionVisibility
struct UWidget_BuildMenu_PowerProduction_C_GetProductionVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C.GetPowerProductionText
struct UWidget_BuildMenu_PowerProduction_C_GetPowerProductionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C.GetOrangeColor
struct UWidget_BuildMenu_PowerProduction_C_GetOrangeColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C.GetDarkGrayText
struct UWidget_BuildMenu_PowerProduction_C_GetDarkGrayText_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
