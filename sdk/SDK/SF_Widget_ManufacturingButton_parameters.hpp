#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_ManufacturingButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetTextHoverColor
struct UWidget_ManufacturingButton_C_GetTextHoverColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetHoverColor
struct UWidget_ManufacturingButton_C_GetHoverColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeIsActiveVisibility
struct UWidget_ManufacturingButton_C_GetRecipeIsActiveVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeIcon
struct UWidget_ManufacturingButton_C_GetRecipeIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnMouseButtonDown
struct UWidget_ManufacturingButton_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeDisplayName
struct UWidget_ManufacturingButton_C_GetRecipeDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWidget_ManufacturingButton_C_BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWidget_ManufacturingButton_C_BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWidget_ManufacturingButton_C_BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.Construct
struct UWidget_ManufacturingButton_C_Construct_Params
{
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.ExecuteUbergraph_Widget_ManufacturingButton
struct UWidget_ManufacturingButton_C_ExecuteUbergraph_Widget_ManufacturingButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnStopHoveringManufacturingRecipe__DelegateSignature
struct UWidget_ManufacturingButton_C_OnStopHoveringManufacturingRecipe__DelegateSignature_Params
{
	class UClass*                                      UnhoveredRecipe;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnManufacturingRecipeHovered__DelegateSignature
struct UWidget_ManufacturingButton_C_OnManufacturingRecipeHovered__DelegateSignature_Params
{
	class UClass*                                      RecipeHover;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnManufacturingRecipeClicked__DelegateSignature
struct UWidget_ManufacturingButton_C_OnManufacturingRecipeClicked__DelegateSignature_Params
{
	class UClass*                                      recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
