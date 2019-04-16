#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Anim_Rifle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_Rifle.Anim_Rifle_C
// 0x02B0 (0x0610 - 0x0360)
class UAnim_Rifle_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8DC79B034D3FE05994EFA49E3085B0C9;      // 0x0368(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CB0FBFE74577D5DB1F720D915ED0F49C;// 0x03B0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E1F86DE54912D1A739EAA4B1F760F051;// 0x0460(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B76B50C04F77D71C07D3AAB6F10444EB;// 0x04A8(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_415F456F4E88C1313717A4ADD74E310E;      // 0x0588(0x0070)
	class UAnimMontage*                                mPrimaryFireMontage;                                      // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mPrimaryFirePlayLength;                                   // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsEquipped;                                              // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0605(0x0003) MISSED OFFSET
	class AFGCharacterPlayer*                          mBPCharacter;                                             // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_Rifle.Anim_Rifle_C");
		return ptr;
	}


	void IsEquipped(class UClass* EquipmentClass, bool* IsEquiped);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Anim_Rifle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
