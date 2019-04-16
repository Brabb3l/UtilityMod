#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_GeneratorNuclear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_GeneratorNuclear.Build_GeneratorNuclear_C
// 0x00AC (0x0714 - 0x0668)
class ABuild_GeneratorNuclear_C : public AFGBuildableGeneratorNuclear
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0668(0x0008) (Transient, DuplicateTransient)
	class UFGProductionIndicatorComponent*             FGProductionIndicator;                                    // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Snap;                                                     // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryLegsComponent*                     FGFactoryLegs;                                            // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FogPlane_01;                                              // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FogPlane_02;                                              // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPowerConnectionComponent*                 PowerConnection;                                          // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MainMesh_Skl;                                             // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LadderComponent_C*                       BP_LadderComponent1;                                      // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LadderComponent_C*                       BP_LadderComponent;                                       // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Water;                                                    // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryConnectionComponent*               Output0;                                                  // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MainMesh;                                                 // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Clearance;                                                // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryConnectionComponent*               Input0;                                                   // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mExhaustSmoke01;                                          // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBoilingWater01;                                          // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBoilingWater02;                                          // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mLightning01;                                             // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mLightning02;                                             // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              mCachedLoadPercentage;                                    // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_GeneratorNuclear.Build_GeneratorNuclear_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void GainedSignificance();
	void LostSignificance();
	void StartProductionLoopEffects();
	void StopProductionLoopEffects();
	void StartIdlingLoopEffects();
	void StopIdlingLoopEffects();
	void ReceiveUpdateEffects(float* DeltaSeconds);
	void ExecuteUbergraph_Build_GeneratorNuclear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
