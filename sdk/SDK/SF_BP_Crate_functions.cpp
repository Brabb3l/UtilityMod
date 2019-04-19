// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_Crate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Crate.BP_Crate_C.AddAsRepresentation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Crate_C::AddAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.AddAsRepresentation");

	ABP_Crate_C_AddAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Crate.BP_Crate_C.GetActorCompassColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor ABP_Crate_C::GetActorCompassColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.GetActorCompassColor");

	ABP_Crate_C_GetActorCompassColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Crate.BP_Crate_C.GetActorCompassRepresentationType
// ()
// Parameters:
// ECompassRepresentationType     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassRepresentationType ABP_Crate_C::GetActorCompassRepresentationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.GetActorCompassRepresentationType");

	ABP_Crate_C_GetActorCompassRepresentationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Crate.BP_Crate_C.GetActorCompassText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_Crate_C::GetActorCompassText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.GetActorCompassText");

	ABP_Crate_C_GetActorCompassText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Crate.BP_Crate_C.GetActorCompassTexture
// ()
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ABP_Crate_C::GetActorCompassTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.GetActorCompassTexture");

	ABP_Crate_C_GetActorCompassTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Crate.BP_Crate_C.GetActorShouldShowInComapss
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Crate_C::GetActorShouldShowInComapss()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.GetActorShouldShowInComapss");

	ABP_Crate_C_GetActorShouldShowInComapss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Crate.BP_Crate_C.GetActorShouldShowOnMap
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Crate_C::GetActorShouldShowOnMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.GetActorShouldShowOnMap");

	ABP_Crate_C_GetActorShouldShowOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Crate.BP_Crate_C.GetRealActorLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_Crate_C::GetRealActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.GetRealActorLocation");

	ABP_Crate_C_GetRealActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Crate.BP_Crate_C.GetRealActorRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_Crate_C::GetRealActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.GetRealActorRotation");

	ABP_Crate_C_GetRealActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Crate.BP_Crate_C.IsActorStatic
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Crate_C::IsActorStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.IsActorStatic");

	ABP_Crate_C_IsActorStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Crate.BP_Crate_C.RemoveAsRepresentation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Crate_C::RemoveAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.RemoveAsRepresentation");

	ABP_Crate_C_RemoveAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Crate.BP_Crate_C.UserConstructionScript
// ()

void ABP_Crate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.UserConstructionScript");

	ABP_Crate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crate.BP_Crate_C.StartIsLookedAt
// ()
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Crate_C::StartIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.StartIsLookedAt");

	ABP_Crate_C_StartIsLookedAt_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crate.BP_Crate_C.StopIsLookedAt
// ()
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Crate_C::StopIsLookedAt(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.StopIsLookedAt");

	ABP_Crate_C_StopIsLookedAt_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crate.BP_Crate_C.OnUse
// ()
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Crate_C::OnUse(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.OnUse");

	ABP_Crate_C_OnUse_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crate.BP_Crate_C.SwitchHUD
// ()
// Parameters:
// class AFGCharacterPlayer*      byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Crate_C::SwitchHUD(class AFGCharacterPlayer* byCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.SwitchHUD");

	ABP_Crate_C_SwitchHUD_Params params;
	params.byCharacter = byCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crate.BP_Crate_C.OnRequestReprecentMarker
// ()

void ABP_Crate_C::OnRequestReprecentMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.OnRequestReprecentMarker");

	ABP_Crate_C_OnRequestReprecentMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crate.BP_Crate_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Crate_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.ReceiveEndPlay");

	ABP_Crate_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crate.BP_Crate_C.ReceiveBeginPlay
// ()

void ABP_Crate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.ReceiveBeginPlay");

	ABP_Crate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crate.BP_Crate_C.checkForClearAndRemove
// ()
// Parameters:
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            numRemoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Crate_C::checkForClearAndRemove(class UClass* ItemClass, int numRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.checkForClearAndRemove");

	ABP_Crate_C_checkForClearAndRemove_Params params;
	params.ItemClass = ItemClass;
	params.numRemoved = numRemoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Crate.BP_Crate_C.ExecuteUbergraph_BP_Crate
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Crate_C::ExecuteUbergraph_BP_Crate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crate.BP_Crate_C.ExecuteUbergraph_BP_Crate");

	ABP_Crate_C_ExecuteUbergraph_BP_Crate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
