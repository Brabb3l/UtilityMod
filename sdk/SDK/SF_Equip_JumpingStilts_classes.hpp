#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Equip_JumpingStilts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_JumpingStilts.Equip_JumpingStilts_C
// 0x0010 (0x03D8 - 0x03C8)
class AEquip_JumpingStilts_C : public AFGJumpingStilts
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_JumpingStilts.Equip_JumpingStilts_C");
		return ptr;
	}


	void UserConstructionScript();
	void WasEquipped();
	void WasUnEquipped();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Equip_JumpingStilts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
