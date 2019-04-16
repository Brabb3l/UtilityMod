#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_LocomotiveAnim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_LocomotiveAnim.BP_LocomotiveAnim_C
// 0x0690 (0x09F0 - 0x0360)
class UBP_LocomotiveAnim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D3B97E3D470690B3FF0A57911A814EC1;      // 0x0368(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_45A519974EE7921BC76C89BCF63D9E89;// 0x03B0(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9936BE3745AB8A0705A60CA21F550B76;// 0x03E0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F360F4ED4612734E294966A2EE2C8BA5;// 0x0540(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4AB8E98B4A84A03C49F1CCA32A94564D;// 0x06A0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6F7748C54923DEA6C625ECB7F5D22409;// 0x06E8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DF35E53444E83252B97ED4A89DDF4EE9;// 0x0848(0x0160)
	struct FRotator                                    mFrontBogieRotation;                                      // 0x09A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mBackBogieRotation;                                       // 0x09B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mFrontConnectorRotation;                                  // 0x09C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mBackConnectorRotation;                                   // 0x09CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     mFrontConnectorTranslation;                               // 0x09D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     mBackConnectorTranslation;                                // 0x09E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_LocomotiveAnim.BP_LocomotiveAnim_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_ModifyBone_DF35E53444E83252B97ED4A89DDF4EE9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_ModifyBone_F360F4ED4612734E294966A2EE2C8BA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_ModifyBone_6F7748C54923DEA6C625ECB7F5D22409();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_LocomotiveAnim_AnimGraphNode_ModifyBone_9936BE3745AB8A0705A60CA21F550B76();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BP_LocomotiveAnim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
