#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_ManufacturingStat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.GetEfficiencyIconVisibility
struct UWidget_ManufacturingStat_C_GetEfficiencyIconVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.GetStatText
struct UWidget_ManufacturingStat_C_GetStatText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.PowerIconVisibility
struct UWidget_ManufacturingStat_C_PowerIconVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.CycleTimeIconVisibility
struct UWidget_ManufacturingStat_C_CycleTimeIconVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.PreConstruct
struct UWidget_ManufacturingStat_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.ExecuteUbergraph_Widget_ManufacturingStat
struct UWidget_ManufacturingStat_C_ExecuteUbergraph_Widget_ManufacturingStat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
