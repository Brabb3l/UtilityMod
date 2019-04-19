#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_SpitterProjectileSplit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpitterProjectileSplit.BP_SpitterProjectileSplit_C
// 0x0018 (0x03B0 - 0x0398)
class ABP_SpitterProjectileSplit_C : public AFGProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Projectile;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpitterProjectileSplit.BP_SpitterProjectileSplit_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PlayExplosionEffects();
	void ExecuteUbergraph_BP_SpitterProjectileSplit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
