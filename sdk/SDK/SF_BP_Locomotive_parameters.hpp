#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_Locomotive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Locomotive.BP_Locomotive_C.GetActorCompassRepresentationType
struct ABP_Locomotive_C_GetActorCompassRepresentationType_Params
{
	ECompassRepresentationType                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.AddAsRepresentation
struct ABP_Locomotive_C_AddAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.GetActorCompassColor
struct ABP_Locomotive_C_GetActorCompassColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.GetActorCompassText
struct ABP_Locomotive_C_GetActorCompassText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Locomotive.BP_Locomotive_C.GetActorCompassTexture
struct ABP_Locomotive_C_GetActorCompassTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.GetActorShouldShowInComapss
struct ABP_Locomotive_C_GetActorShouldShowInComapss_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.GetActorShouldShowOnMap
struct ABP_Locomotive_C_GetActorShouldShowOnMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.GetRealActorLocation
struct ABP_Locomotive_C_GetRealActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.GetRealActorRotation
struct ABP_Locomotive_C_GetRealActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.IsActorStatic
struct ABP_Locomotive_C_IsActorStatic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.RemoveAsRepresentation
struct ABP_Locomotive_C_RemoveAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.UserConstructionScript
struct ABP_Locomotive_C_UserConstructionScript_Params
{
};

// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Use_K2Node_InputActionEvent_4
struct ABP_Locomotive_C_InpActEvt_Use_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_3
struct ABP_Locomotive_C_InpActEvt_Jump_Drift_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_2
struct ABP_Locomotive_C_InpActEvt_Jump_Drift_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1
struct ABP_Locomotive_C_InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Locomotive.BP_Locomotive_C.ReceiveTick
struct ABP_Locomotive_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.UpdateCamera
struct ABP_Locomotive_C_UpdateCamera_Params
{
};

// Function BP_Locomotive.BP_Locomotive_C.ReceiveBeginPlay
struct ABP_Locomotive_C_ReceiveBeginPlay_Params
{
};

// Function BP_Locomotive.BP_Locomotive_C.ReceiveDestroyed
struct ABP_Locomotive_C_ReceiveDestroyed_Params
{
};

// Function BP_Locomotive.BP_Locomotive_C.Server_Leave
struct ABP_Locomotive_C_Server_Leave_Params
{
};

// Function BP_Locomotive.BP_Locomotive_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1
struct ABP_Locomotive_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2
struct ABP_Locomotive_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Locomotive.BP_Locomotive_C.ExecuteUbergraph_BP_Locomotive
struct ABP_Locomotive_C_ExecuteUbergraph_BP_Locomotive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
