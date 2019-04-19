#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_C4Explosive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_C4Explosive.BP_C4Explosive_C
// 0x0028 (0x0368 - 0x0340)
class ABP_C4Explosive_C : public AFGC4Explosive
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	class URadialForceComponent*                       RadialForce;                                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        C4Explosive_01;                                           // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_C4Explosive.BP_C4Explosive_C");
		return ptr;
	}


	bool ShouldSave();
	void GatherDependencies(TArray<class UObject*>* out_dependentObjects);
	bool NeedTransform();
	void UserConstructionScript();
	void PostLoadGame(int SaveVersion, int GameVersion);
	void PostSaveGame(int SaveVersion, int GameVersion);
	void PreLoadGame(int SaveVersion, int GameVersion);
	void PreSaveGame(int SaveVersion, int GameVersion);
	void PlayExplosionEffects();
	void ExecuteUbergraph_BP_C4Explosive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
