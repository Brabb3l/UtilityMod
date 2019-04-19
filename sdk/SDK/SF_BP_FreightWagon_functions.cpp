// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_FreightWagon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FreightWagon.BP_FreightWagon_C.GetActorCompassRepresentationType
// ()
// Parameters:
// ECompassRepresentationType     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassRepresentationType ABP_FreightWagon_C::GetActorCompassRepresentationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.GetActorCompassRepresentationType");

	ABP_FreightWagon_C_GetActorCompassRepresentationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FreightWagon.BP_FreightWagon_C.AddAsRepresentation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FreightWagon_C::AddAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.AddAsRepresentation");

	ABP_FreightWagon_C_AddAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FreightWagon.BP_FreightWagon_C.GetActorCompassColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor ABP_FreightWagon_C::GetActorCompassColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.GetActorCompassColor");

	ABP_FreightWagon_C_GetActorCompassColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FreightWagon.BP_FreightWagon_C.GetActorCompassText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_FreightWagon_C::GetActorCompassText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.GetActorCompassText");

	ABP_FreightWagon_C_GetActorCompassText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FreightWagon.BP_FreightWagon_C.GetActorCompassTexture
// ()
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ABP_FreightWagon_C::GetActorCompassTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.GetActorCompassTexture");

	ABP_FreightWagon_C_GetActorCompassTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FreightWagon.BP_FreightWagon_C.GetActorShouldShowInComapss
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FreightWagon_C::GetActorShouldShowInComapss()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.GetActorShouldShowInComapss");

	ABP_FreightWagon_C_GetActorShouldShowInComapss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FreightWagon.BP_FreightWagon_C.GetActorShouldShowOnMap
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FreightWagon_C::GetActorShouldShowOnMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.GetActorShouldShowOnMap");

	ABP_FreightWagon_C_GetActorShouldShowOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FreightWagon.BP_FreightWagon_C.GetRealActorLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_FreightWagon_C::GetRealActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.GetRealActorLocation");

	ABP_FreightWagon_C_GetRealActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FreightWagon.BP_FreightWagon_C.GetRealActorRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_FreightWagon_C::GetRealActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.GetRealActorRotation");

	ABP_FreightWagon_C_GetRealActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FreightWagon.BP_FreightWagon_C.IsActorStatic
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FreightWagon_C::IsActorStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.IsActorStatic");

	ABP_FreightWagon_C_IsActorStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FreightWagon.BP_FreightWagon_C.RemoveAsRepresentation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FreightWagon_C::RemoveAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.RemoveAsRepresentation");

	ABP_FreightWagon_C_RemoveAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FreightWagon.BP_FreightWagon_C.UserConstructionScript
// ()

void ABP_FreightWagon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.UserConstructionScript");

	ABP_FreightWagon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreightWagon.BP_FreightWagon_C.OnUse
// ()
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_FreightWagon_C::OnUse(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.OnUse");

	ABP_FreightWagon_C_OnUse_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreightWagon.BP_FreightWagon_C.ReceiveBeginPlay
// ()

void ABP_FreightWagon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.ReceiveBeginPlay");

	ABP_FreightWagon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreightWagon.BP_FreightWagon_C.ReceiveDestroyed
// ()

void ABP_FreightWagon_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.ReceiveDestroyed");

	ABP_FreightWagon_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FreightWagon.BP_FreightWagon_C.ExecuteUbergraph_BP_FreightWagon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FreightWagon_C::ExecuteUbergraph_BP_FreightWagon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreightWagon.BP_FreightWagon_C.ExecuteUbergraph_BP_FreightWagon");

	ABP_FreightWagon_C_ExecuteUbergraph_BP_FreightWagon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
