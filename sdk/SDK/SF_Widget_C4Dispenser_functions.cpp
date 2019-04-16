// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_C4Dispenser_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_C4Dispenser.Widget_C4Dispenser_C.Get_mC4Throwbar_Visibility_1
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_C4Dispenser_C::Get_mC4Throwbar_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_C4Dispenser.Widget_C4Dispenser_C.Get_mC4Throwbar_Visibility_1");

	UWidget_C4Dispenser_C_Get_mC4Throwbar_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_C4Dispenser.Widget_C4Dispenser_C.Get_mC4Throwbar_FillColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_C4Dispenser_C::Get_mC4Throwbar_FillColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_C4Dispenser.Widget_C4Dispenser_C.Get_mC4Throwbar_FillColorAndOpacity_1");

	UWidget_C4Dispenser_C_Get_mC4Throwbar_FillColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_C4Dispenser.Widget_C4Dispenser_C.GetThrowPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWidget_C4Dispenser_C::GetThrowPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_C4Dispenser.Widget_C4Dispenser_C.GetThrowPercent");

	UWidget_C4Dispenser_C_GetThrowPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
