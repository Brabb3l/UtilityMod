#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_PowerPoleMk1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_PowerPoleMk1.Build_PowerPoleMk1_C
// 0x0018 (0x0590 - 0x0578)
class ABuild_PowerPoleMk1_C : public AFGBuildablePowerPole
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0578(0x0008) (Transient, DuplicateTransient)
	class UBP_BuildingPointLight_C*                    BP_BuildingPointLight;                                    // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Clearance;                                                // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_PowerPoleMk1.Build_PowerPoleMk1_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnHasPowerChanged_2(bool newHasPower);
	void PlayConstructSound();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Build_PowerPoleMk1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
