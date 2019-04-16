#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Equip_Rifle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_Rifle.Equip_Rifle_C
// 0x0034 (0x042C - 0x03F8)
class AEquip_Rifle_C : public AFGWeaponInstantFire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            mAmmo;                                                    // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Rifle;                                                    // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    Fire;                                                     // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              mLockAngle;                                               // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_Rifle.Equip_Rifle_C");
		return ptr;
	}


	void UserConstructionScript();
	void WasEquipped();
	void WasUnEquipped();
	void SwitchHUD(bool ShowHUD);
	void ReceiveBeginPlay();
	void PlayReloadEffects();
	void PlayFireEffect();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Equip_Rifle(int EntryPoint);
	void Fire__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
