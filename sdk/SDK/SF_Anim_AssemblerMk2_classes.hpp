#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Anim_AssemblerMk2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_AssemblerMk2.Anim_AssemblerMk2_C
// 0x004F (0x0FD0 - 0x0F81)
class UAnim_AssemblerMk2_C : public UAnim_AssemblerMk1_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0F81(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F88(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    mHeatGridVfx01;                                           // 0x0F90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mHeatGridVfx02;                                           // 0x0F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mHeatGridVfx03;                                           // 0x0FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mHeatGridVfx04;                                           // 0x0FA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mExhaustVfx01;                                            // 0x0FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mExhaustVfx02;                                            // 0x0FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mExhaustVfx03;                                            // 0x0FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mExhaustVfx04;                                            // 0x0FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_AssemblerMk2.Anim_AssemblerMk2_C");
		return ptr;
	}


	void AnimNotify_ConstructorAdvancedIndustrialLeftOfflineState();
	void AnimNotify_ConstructorAdvancedIndustrialEnteredProducingState();
	void AnimNotify_ConstructorAdvancedIndustrialLeftProducingState();
	void AnimNotify_ConstructorAdvancedIndustrialEnteredOfflineState();
	void ExecuteUbergraph_Anim_AssemblerMk2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
