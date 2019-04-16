#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Equip_RebarScatterGun_Projectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_RebarScatterGun_Projectile.Equip_RebarScatterGun_Projectile_C
// 0x0014 (0x0448 - 0x0434)
class AEquip_RebarScatterGun_Projectile_C : public AEquip_RebarGun_Projectile_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Frame;                                                    // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_RebarScatterGun_Projectile.Equip_RebarScatterGun_Projectile_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
