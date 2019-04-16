// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_MapObject_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MapObject.Widget_MapObject_C.GetMapVisibility
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_MapObject_C::GetMapVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapObject.Widget_MapObject_C.GetMapVisibility");

	UWidget_MapObject_C_GetMapVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MapObject.Widget_MapObject_C.GetMapColor
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UWidget_MapObject_C::GetMapColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapObject.Widget_MapObject_C.GetMapColor");

	UWidget_MapObject_C_GetMapColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Widget_MapObject.Widget_MapObject_C.GetMapImage
// ()
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_MapObject_C::GetMapImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapObject.Widget_MapObject_C.GetMapImage");

	UWidget_MapObject_C_GetMapImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MapObject.Widget_MapObject_C.GetMapText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_MapObject_C::GetMapText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapObject.Widget_MapObject_C.GetMapText");

	UWidget_MapObject_C_GetMapText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MapObject.Widget_MapObject_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MapObject_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapObject.Widget_MapObject_C.Tick");

	UWidget_MapObject_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapObject.Widget_MapObject_C.ExecuteUbergraph_Widget_MapObject
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MapObject_C::ExecuteUbergraph_Widget_MapObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapObject.Widget_MapObject_C.ExecuteUbergraph_Widget_MapObject");

	UWidget_MapObject_C_ExecuteUbergraph_Widget_MapObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
