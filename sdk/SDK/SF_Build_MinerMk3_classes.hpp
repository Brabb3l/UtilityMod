#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_MinerMk3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_MinerMk3.Build_MinerMk3_C
// 0x0028 (0x0700 - 0x06D8)
class ABuild_MinerMk3_C : public ABuild_MinerMk2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (Transient, DuplicateTransient)
	class UBP_LadderComponent_C*                       BP_LadderComponent;                                       // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EMinerState>                           mInternalMiningState_1;                                   // 0x06E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06E9(0x0007) MISSED OFFSET
	struct FTimerHandle                                mToggleMiningStateHandle_1;                               // 0x06F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              mMinimumDrillTime_1;                                      // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mMaximumDrillTime_1;                                      // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_MinerMk3.Build_MinerMk3_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Build_MinerMk3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
