#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_ConsumeableEquipment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ConsumeableEquipment.BP_ConsumeableEquipment_C
// 0x0014 (0x03BC - 0x03A8)
class ABP_ConsumeableEquipment_C : public AFGConsumableEquipment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      ConsumeableMesh;                                          // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                mRandomAnim;                                              // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConsumeableEquipment.BP_ConsumeableEquipment_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayConsumeEffects(class UFGConsumableDescriptor** consumable);
	void ReceiveTick(float* DeltaSeconds);
	void WasEquipped();
	void ExecuteUbergraph_BP_ConsumeableEquipment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
