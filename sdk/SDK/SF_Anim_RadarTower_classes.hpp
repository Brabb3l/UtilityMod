#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Anim_RadarTower_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_RadarTower.Anim_RadarTower_C
// 0x03C9 (0x0729 - 0x0360)
class UAnim_RadarTower_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_51FCBC114CEC56344D86AB9772D29BEB;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B87043DA4E6489AB56A09BB597DDC988;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0295A2F5438073329438B0A99D336879;// 0x03F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF3C3F8143802454E3A6C8ABE9310A07;// 0x0440(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9FA23685402C3D95163AF38E371A5E4F;// 0x04F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_165AA38F4C758913DB3EDAAA371E556A;// 0x0538(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_232993D54E44F5AEC5A1DC908C97C902;// 0x05E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C33727B04E4C8F9CDBEBA6B65287913E;// 0x0630(0x00E0)
	float                                              mDeltaTime;                                               // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsProducing;                                             // 0x0714(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0715(0x0003) MISSED OFFSET
	float                                              mRampItUpTime;                                            // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mRampDownTime;                                            // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mAnimPlayRate;                                            // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mTimeNotProducing;                                        // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mHasPower;                                                // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_RadarTower.Anim_RadarTower_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_RadarTower_AnimGraphNode_TransitionResult_0295A2F5438073329438B0A99D336879();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_RadarTower_AnimGraphNode_SequencePlayer_FF3C3F8143802454E3A6C8ABE9310A07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_RadarTower_AnimGraphNode_SequencePlayer_165AA38F4C758913DB3EDAAA371E556A();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_RadarTower_AnimGraphNode_TransitionResult_B87043DA4E6489AB56A09BB597DDC988();
	void HasPowerChanged(bool State);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Anim_RadarTower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
