// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_ManufacturingStat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.GetEfficiencyIconVisibility
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_ManufacturingStat_C::GetEfficiencyIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.GetEfficiencyIconVisibility");

	UWidget_ManufacturingStat_C_GetEfficiencyIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.GetStatText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_ManufacturingStat_C::GetStatText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.GetStatText");

	UWidget_ManufacturingStat_C_GetStatText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.PowerIconVisibility
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_ManufacturingStat_C::PowerIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.PowerIconVisibility");

	UWidget_ManufacturingStat_C_PowerIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.CycleTimeIconVisibility
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_ManufacturingStat_C::CycleTimeIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.CycleTimeIconVisibility");

	UWidget_ManufacturingStat_C_CycleTimeIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.PreConstruct
// ()
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManufacturingStat_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.PreConstruct");

	UWidget_ManufacturingStat_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.ExecuteUbergraph_Widget_ManufacturingStat
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ManufacturingStat_C::ExecuteUbergraph_Widget_ManufacturingStat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ManufacturingStat.Widget_ManufacturingStat_C.ExecuteUbergraph_Widget_ManufacturingStat");

	UWidget_ManufacturingStat_C_ExecuteUbergraph_Widget_ManufacturingStat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
