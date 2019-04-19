#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_MaterialEffect_SpaceElevator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MaterialEffect_SpaceElevator.BP_MaterialEffect_SpaceElevator_C
// 0x0010 (0x0538 - 0x0528)
class UBP_MaterialEffect_SpaceElevator_C : public UBP_MaterialEffect_Build_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0528(0x0008) (Transient, DuplicateTransient)
	class ALevelSequenceActor*                         mSpaceElevatorSequence_1;                                 // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MaterialEffect_SpaceElevator.BP_MaterialEffect_SpaceElevator_C");
		return ptr;
	}


	void OnEnded();
	void OnStarted();
	void ExecuteUbergraph_BP_MaterialEffect_SpaceElevator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
