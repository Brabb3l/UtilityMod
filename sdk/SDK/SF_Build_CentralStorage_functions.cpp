// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_CentralStorage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_CentralStorage.Build_CentralStorage_C.GetActorCompassRepresentationType
// ()
// Parameters:
// ECompassRepresentationType     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassRepresentationType ABuild_CentralStorage_C::GetActorCompassRepresentationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.GetActorCompassRepresentationType");

	ABuild_CentralStorage_C_GetActorCompassRepresentationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_CentralStorage.Build_CentralStorage_C.RemoveAsRepresentation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_CentralStorage_C::RemoveAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.RemoveAsRepresentation");

	ABuild_CentralStorage_C_RemoveAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_CentralStorage.Build_CentralStorage_C.GetRealActorRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABuild_CentralStorage_C::GetRealActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.GetRealActorRotation");

	ABuild_CentralStorage_C_GetRealActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_CentralStorage.Build_CentralStorage_C.GetRealActorLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABuild_CentralStorage_C::GetRealActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.GetRealActorLocation");

	ABuild_CentralStorage_C_GetRealActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_CentralStorage.Build_CentralStorage_C.GetActorCompassColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor ABuild_CentralStorage_C::GetActorCompassColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.GetActorCompassColor");

	ABuild_CentralStorage_C_GetActorCompassColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_CentralStorage.Build_CentralStorage_C.GetActorShouldShowInComapss
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_CentralStorage_C::GetActorShouldShowInComapss()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.GetActorShouldShowInComapss");

	ABuild_CentralStorage_C_GetActorShouldShowInComapss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_CentralStorage.Build_CentralStorage_C.GetActorShouldShowOnMap
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_CentralStorage_C::GetActorShouldShowOnMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.GetActorShouldShowOnMap");

	ABuild_CentralStorage_C_GetActorShouldShowOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_CentralStorage.Build_CentralStorage_C.AddAsRepresentation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_CentralStorage_C::AddAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.AddAsRepresentation");

	ABuild_CentralStorage_C_AddAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_CentralStorage.Build_CentralStorage_C.GetActorCompassText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABuild_CentralStorage_C::GetActorCompassText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.GetActorCompassText");

	ABuild_CentralStorage_C_GetActorCompassText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_CentralStorage.Build_CentralStorage_C.GetActorCompassTexture
// ()
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ABuild_CentralStorage_C::GetActorCompassTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.GetActorCompassTexture");

	ABuild_CentralStorage_C_GetActorCompassTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_CentralStorage.Build_CentralStorage_C.IsActorStatic
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_CentralStorage_C::IsActorStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.IsActorStatic");

	ABuild_CentralStorage_C_IsActorStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_CentralStorage.Build_CentralStorage_C.CanDismantle
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_CentralStorage_C::CanDismantle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.CanDismantle");

	ABuild_CentralStorage_C_CanDismantle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_CentralStorage.Build_CentralStorage_C.UserConstructionScript
// ()

void ABuild_CentralStorage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CentralStorage.Build_CentralStorage_C.UserConstructionScript");

	ABuild_CentralStorage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
