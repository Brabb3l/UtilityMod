#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_Truck_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Truck.BP_Truck_C
// 0x0049 (0x0889 - 0x0840)
class ABP_Truck_C : public ABP_WheeledVehicle6W_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight1;                                               // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_WorkBenchComponent_C*                    BP_WorkBenchComponent1;                                   // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Workbench;                                                // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_WorkBenchComponent_C*                    BP_WorkBenchComponent;                                    // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               mFlashlightOn;                                            // 0x0888(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Truck.BP_Truck_C");
		return ptr;
	}


	void OnRep_mFlashlightOn();
	struct FVector GetAttackLocation();
	float GetEnemyTargetDesirability(class AFGEnemyController** forController);
	bool ShouldAutoregisterAsTargetable();
	void UserConstructionScript();
	void InpActEvt_Flashlight_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OpenTrunk();
	void CloseTrunk();
	void Server_SetFlashlightOn(bool FlashlightOn);
	void ExecuteUbergraph_BP_Truck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
