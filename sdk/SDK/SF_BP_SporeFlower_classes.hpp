#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_SporeFlower_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SporeFlower.BP_SporeFlower_C
// 0x00B0 (0x03D8 - 0x0328)
class ABP_SporeFlower_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    FireFlies_02;                                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FireFlies_01;                                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            TriggerSphere;                                            // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGDotComponent*                             DotComponent;                                             // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DamageSphere;                                             // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              mGasDuration;                                             // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mReleaseGasCooldown;                                      // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              mTriggerActorClasses;                                     // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              mTriggeredActors;                                         // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<ESporeFlowerState>                     mState;                                                   // 0x0398(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESporeFlowerGasState>                  mGasState;                                                // 0x0399(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x039A(0x0006) MISSED OFFSET
	class UParticleSystem*                             mGasParticle;                                             // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    mGasPSC;                                                  // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       mParticleParameterName;                                   // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mReplicatedAnimPosition;                                  // 0x03B8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UAnimSequence*                               mGrowAnimation;                                           // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               mSporeAnimation;                                          // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                mUpdateAnimPositionTimer;                                 // 0x03D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SporeFlower.BP_SporeFlower_C");
		return ptr;
	}


	void StopSporeAnimation();
	void UpdateAnimationFromState();
	void OnRep_mReplicatedAnimPosition();
	void StartSporeAnimation();
	void GetStatePlayRate(float* PlayRate);
	void GetOffCooldown();
	void StartReleasingGas();
	void OnRep_mGasState();
	void OnRep_mState();
	void StopExpanding();
	void StopReleasingGas();
	void CondintionallyReverseExpanding();
	void ConditionallyStartExpanding();
	void ActorShouldTriggerFlower(class AActor* Actor, bool* shouldTrigger);
	void UserConstructionScript();
	void ActivateDamage();
	void BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void SpawnGasParticles();
	void ReceiveBeginPlay();
	void UpdateAnimPosition();
	void GainedSignificance();
	void LostSignificance();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_SporeFlower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
