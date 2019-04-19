// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_Rifle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Rifle.Widget_Rifle_C.GetAmmoAvailable
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Rifle_C::GetAmmoAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Rifle.Widget_Rifle_C.GetAmmoAvailable");

	UWidget_Rifle_C_GetAmmoAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Rifle.Widget_Rifle_C.GetAmmoText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Rifle_C::GetAmmoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Rifle.Widget_Rifle_C.GetAmmoText");

	UWidget_Rifle_C_GetAmmoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Rifle.Widget_Rifle_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Rifle_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Rifle.Widget_Rifle_C.Tick");

	UWidget_Rifle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Rifle.Widget_Rifle_C.ExecuteUbergraph_Widget_Rifle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Rifle_C::ExecuteUbergraph_Widget_Rifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Rifle.Widget_Rifle_C.ExecuteUbergraph_Widget_Rifle");

	UWidget_Rifle_C_ExecuteUbergraph_Widget_Rifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
