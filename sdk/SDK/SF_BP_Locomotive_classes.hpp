#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_Locomotive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Locomotive.BP_Locomotive_C
// 0x0019 (0x05B9 - 0x05A0)
class ABP_Locomotive_C : public AFGLocomotive
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A0(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               mIsThrottleZero;                                          // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Locomotive.BP_Locomotive_C");
		return ptr;
	}


	ECompassRepresentationType GetActorCompassRepresentationType();
	bool AddAsRepresentation();
	struct FLinearColor GetActorCompassColor();
	struct FText GetActorCompassText();
	class UTexture2D* GetActorCompassTexture();
	bool GetActorShouldShowInComapss();
	bool GetActorShouldShowOnMap();
	struct FVector GetRealActorLocation();
	struct FRotator GetRealActorRotation();
	bool IsActorStatic();
	bool RemoveAsRepresentation();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Jump_Drift_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Jump_Drift_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveTick(float* DeltaSeconds);
	void UpdateCamera();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Server_Leave();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue);
	void ExecuteUbergraph_BP_Locomotive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
