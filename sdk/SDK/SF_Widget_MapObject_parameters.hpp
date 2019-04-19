#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_MapObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_MapObject.Widget_MapObject_C.GetMapVisibility
struct UWidget_MapObject_C_GetMapVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_MapObject.Widget_MapObject_C.GetMapColor
struct UWidget_MapObject_C_GetMapColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Widget_MapObject.Widget_MapObject_C.GetMapImage
struct UWidget_MapObject_C_GetMapImage_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_MapObject.Widget_MapObject_C.GetMapText
struct UWidget_MapObject_C_GetMapText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_MapObject.Widget_MapObject_C.Tick
struct UWidget_MapObject_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MapObject.Widget_MapObject_C.ExecuteUbergraph_Widget_MapObject
struct UWidget_MapObject_C_ExecuteUbergraph_Widget_MapObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
