#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Equip_HazmatSuit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_HazmatSuit.Equip_HazmatSuit_C
// 0x0008 (0x03C0 - 0x03B8)
class AEquip_HazmatSuit_C : public AFGSuitBase
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_HazmatSuit.Equip_HazmatSuit_C");
		return ptr;
	}


	float AdjustDamage(float* damageAmount, class UDamageType** DamageType, class AController** instigatedBy, class AActor** damageCauser);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
