// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_ManufacturingButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetTextHoverColor
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_ManufacturingButton_C::GetTextHoverColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetTextHoverColor");

	UWidget_ManufacturingButton_C_GetTextHoverColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetHoverColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_ManufacturingButton_C::GetHoverColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetHoverColor");

	UWidget_ManufacturingButton_C_GetHoverColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeIsActiveVisibility
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_ManufacturingButton_C::GetRecipeIsActiveVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeIsActiveVisibility");

	UWidget_ManufacturingButton_C_GetRecipeIsActiveVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeIcon
// ()
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_ManufacturingButton_C::GetRecipeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeIcon");

	UWidget_ManufacturingButton_C_GetRecipeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnMouseButtonDown
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_ManufacturingButton_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnMouseButtonDown");

	UWidget_ManufacturingButton_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeDisplayName
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_ManufacturingButton_C::GetRecipeDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeDisplayName");

	UWidget_ManufacturingButton_C_GetRecipeDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// ()

void UWidget_ManufacturingButton_C::BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_ManufacturingButton_C_BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// ()

void UWidget_ManufacturingButton_C::BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWidget_ManufacturingButton_C_BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// ()

void UWidget_ManufacturingButton_C::BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWidget_ManufacturingButton_C_BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.Construct
// ()

void UWidget_ManufacturingButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.Construct");

	UWidget_ManufacturingButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.ExecuteUbergraph_Widget_ManufacturingButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManufacturingButton_C::ExecuteUbergraph_Widget_ManufacturingButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.ExecuteUbergraph_Widget_ManufacturingButton");

	UWidget_ManufacturingButton_C_ExecuteUbergraph_Widget_ManufacturingButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnStopHoveringManufacturingRecipe__DelegateSignature
// ()
// Parameters:
// class UClass*                  UnhoveredRecipe                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManufacturingButton_C::OnStopHoveringManufacturingRecipe__DelegateSignature(class UClass* UnhoveredRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnStopHoveringManufacturingRecipe__DelegateSignature");

	UWidget_ManufacturingButton_C_OnStopHoveringManufacturingRecipe__DelegateSignature_Params params;
	params.UnhoveredRecipe = UnhoveredRecipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnManufacturingRecipeHovered__DelegateSignature
// ()
// Parameters:
// class UClass*                  RecipeHover                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManufacturingButton_C::OnManufacturingRecipeHovered__DelegateSignature(class UClass* RecipeHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnManufacturingRecipeHovered__DelegateSignature");

	UWidget_ManufacturingButton_C_OnManufacturingRecipeHovered__DelegateSignature_Params params;
	params.RecipeHover = RecipeHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnManufacturingRecipeClicked__DelegateSignature
// ()
// Parameters:
// class UClass*                  recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManufacturingButton_C::OnManufacturingRecipeClicked__DelegateSignature(class UClass* recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnManufacturingRecipeClicked__DelegateSignature");

	UWidget_ManufacturingButton_C_OnManufacturingRecipeClicked__DelegateSignature_Params params;
	params.recipe = recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
