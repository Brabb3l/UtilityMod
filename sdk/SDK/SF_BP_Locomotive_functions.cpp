// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_Locomotive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Locomotive.BP_Locomotive_C.GetActorCompassRepresentationType
// ()
// Parameters:
// ECompassRepresentationType     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassRepresentationType ABP_Locomotive_C::GetActorCompassRepresentationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorCompassRepresentationType");

	ABP_Locomotive_C_GetActorCompassRepresentationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.AddAsRepresentation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Locomotive_C::AddAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.AddAsRepresentation");

	ABP_Locomotive_C_AddAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorCompassColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor ABP_Locomotive_C::GetActorCompassColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorCompassColor");

	ABP_Locomotive_C_GetActorCompassColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorCompassText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_Locomotive_C::GetActorCompassText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorCompassText");

	ABP_Locomotive_C_GetActorCompassText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorCompassTexture
// ()
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ABP_Locomotive_C::GetActorCompassTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorCompassTexture");

	ABP_Locomotive_C_GetActorCompassTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorShouldShowInComapss
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Locomotive_C::GetActorShouldShowInComapss()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorShouldShowInComapss");

	ABP_Locomotive_C_GetActorShouldShowInComapss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorShouldShowOnMap
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Locomotive_C::GetActorShouldShowOnMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorShouldShowOnMap");

	ABP_Locomotive_C_GetActorShouldShowOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetRealActorLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_Locomotive_C::GetRealActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetRealActorLocation");

	ABP_Locomotive_C_GetRealActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetRealActorRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_Locomotive_C::GetRealActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetRealActorRotation");

	ABP_Locomotive_C_GetRealActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.IsActorStatic
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Locomotive_C::IsActorStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.IsActorStatic");

	ABP_Locomotive_C_IsActorStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.RemoveAsRepresentation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Locomotive_C::RemoveAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.RemoveAsRepresentation");

	ABP_Locomotive_C_RemoveAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.UserConstructionScript
// ()

void ABP_Locomotive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.UserConstructionScript");

	ABP_Locomotive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Use_K2Node_InputActionEvent_4
// ()
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Locomotive_C::InpActEvt_Use_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Use_K2Node_InputActionEvent_4");

	ABP_Locomotive_C_InpActEvt_Use_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_3
// ()
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Locomotive_C::InpActEvt_Jump_Drift_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_3");

	ABP_Locomotive_C_InpActEvt_Jump_Drift_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_2
// ()
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Locomotive_C::InpActEvt_Jump_Drift_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_2");

	ABP_Locomotive_C_InpActEvt_Jump_Drift_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1
// ()
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Locomotive_C::InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1");

	ABP_Locomotive_C_InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Locomotive_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.ReceiveTick");

	ABP_Locomotive_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.UpdateCamera
// ()

void ABP_Locomotive_C::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.UpdateCamera");

	ABP_Locomotive_C_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.ReceiveBeginPlay
// ()

void ABP_Locomotive_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.ReceiveBeginPlay");

	ABP_Locomotive_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.ReceiveDestroyed
// ()

void ABP_Locomotive_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.ReceiveDestroyed");

	ABP_Locomotive_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.Server_Leave
// ()

void ABP_Locomotive_C::Server_Leave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.Server_Leave");

	ABP_Locomotive_C_Server_Leave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1
// ()
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Locomotive_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1");

	ABP_Locomotive_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2
// ()
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Locomotive_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2");

	ABP_Locomotive_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.ExecuteUbergraph_BP_Locomotive
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Locomotive_C::ExecuteUbergraph_BP_Locomotive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.ExecuteUbergraph_BP_Locomotive");

	ABP_Locomotive_C_ExecuteUbergraph_BP_Locomotive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
