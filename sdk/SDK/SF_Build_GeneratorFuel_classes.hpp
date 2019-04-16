#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_GeneratorFuel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_GeneratorFuel.Build_GeneratorFuel_C
// 0x0088 (0x06E8 - 0x0660)
class ABuild_GeneratorFuel_C : public AFGBuildableGeneratorFuel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      MainMesh;                                                 // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryLegsComponent*                     FGFactoryLegs;                                            // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPowerConnectionComponent*                 PowerConnection;                                          // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LadderComponent_C*                       BP_LadderComponent;                                       // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LadderComponent_C*                       Ladder;                                                   // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGColoredInstanceMeshProxy*                 FGColoredInstanceMeshProxy;                               // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_ProductionIndicatorInstanced_C*          BP_ProductionIndicatorInstanced;                          // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Snap;                                                     // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Clearance;                                                // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryConnectionComponent*               Input0;                                                   // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mSmokeVfx01;                                              // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mSmokeVfx02;                                              // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mSmokeVfx03;                                              // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mSmokeVfx04;                                              // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              mRTPCInterval;                                            // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mCachedLoadPercentage;                                    // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_GeneratorFuel.Build_GeneratorFuel_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveUpdateEffects(float* DeltaSeconds);
	void GainedSignificance();
	void StartProductionLoopEffects();
	void StopProductionLoopEffects();
	void LostSignificance();
	void ExecuteUbergraph_Build_GeneratorFuel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
