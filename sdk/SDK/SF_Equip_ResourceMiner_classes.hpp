#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Equip_ResourceMiner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_ResourceMiner.Equip_ResourceMiner_C
// 0x0038 (0x03F8 - 0x03C0)
class AEquip_ResourceMiner_C : public AFGResourceMiner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     mCachedWorldGenerator;                                    // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UDecalComponent*                             mFirstDecal;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             mSecondDecal;                                             // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             mThirdDecal;                                              // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_ResourceDeposit_C*                       mResourceDeposit;                                         // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_ResourceMiner.Equip_ResourceMiner_C");
		return ptr;
	}


	void UserConstructionScript();
	void StopMining();
	void StartMining();
	void WasEquipped();
	void PlayFinalEffects();
	void PlayMiningEffect();
	void StartCameraShake();
	void PlaySecondEffects();
	void HitDeposit(class AActor* Hit_Actor_Ref, const struct FVector& Hit_Location);
	void ExecuteUbergraph_Equip_ResourceMiner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
