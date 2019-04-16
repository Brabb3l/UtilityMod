#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_GeneratorIntegratedBiomass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C
// 0x0064 (0x06C4 - 0x0660)
class ABuild_GeneratorIntegratedBiomass_C : public AFGBuildableGeneratorFuel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UBP_ProductionIndicatorInstanced_C*          BP_ProductionIndicatorInstanced;                          // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGColoredInstanceMeshProxy*                 FGColoredInstanceMeshProxy;                               // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak;                                                       // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_BuildingSpotLight_C*                     BP_BuildingSpotLight;                                     // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_BuildingPointLight_C*                    BP_BuildingPointLight;                                    // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MainMesh_static;                                          // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MainMesh_Skl;                                             // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPowerConnectionComponent*                 PowerConnection;                                          // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mFunnelVfx;                                               // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBioGenVfx01;                                             // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mBioGenVfx02;                                             // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              mCachedLoadPercentage;                                    // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C");
		return ptr;
	}


	bool CanDismantle();
	void UserConstructionScript();
	void GainedSignificance();
	void StartProductionLoopEffects();
	void StopProductionLoopEffects();
	void LostSignificance();
	void ReceiveUpdateEffects(float* DeltaSeconds);
	void ExecuteUbergraph_Build_GeneratorIntegratedBiomass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
