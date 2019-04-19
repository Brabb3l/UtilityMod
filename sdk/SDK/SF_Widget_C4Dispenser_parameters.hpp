#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_C4Dispenser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_C4Dispenser.Widget_C4Dispenser_C.Get_mC4Throwbar_Visibility_1
struct UWidget_C4Dispenser_C_Get_mC4Throwbar_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_C4Dispenser.Widget_C4Dispenser_C.Get_mC4Throwbar_FillColorAndOpacity_1
struct UWidget_C4Dispenser_C_Get_mC4Throwbar_FillColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Widget_C4Dispenser.Widget_C4Dispenser_C.GetThrowPercent
struct UWidget_C4Dispenser_C_GetThrowPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
