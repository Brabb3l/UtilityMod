#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_RailroadSwitchControl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_RailroadSwitchControl.Build_RailroadSwitchControl_C
// 0x0018 (0x0640 - 0x0628)
class ABuild_RailroadSwitchControl_C : public AFGBuildableRailroadSwitchControl
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0628(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SwitchControlBox;                                         // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SwitchLeveler;                                            // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_RailroadSwitchControl.Build_RailroadSwitchControl_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Build_RailroadSwitchControl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
