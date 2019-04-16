#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Anim_QuantumEncoder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_QuantumEncoder.Anim_QuantumEncoder_C
// 0x2168 (0x24C8 - 0x0360)
class UAnim_QuantumEncoder_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EBC00EC44F8D6CC0991B5BA971ED645B;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A7398B274706C007530B8786005A2764;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A6EE2ACA4C52240F2B747E9D4787EF47;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4ABA6622495E538BE53E81A34096B352;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36BD220C456811F8025569B1958728A7;// 0x0488(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE980E0948DBEA123C5523B41071DF17;// 0x04D0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_31F5881F466844B39FDCD7B7384D5BB6;// 0x0580(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51874C6C4C99FA1FB5153DA559F94B36;// 0x05C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D84880E14074411FD1FBE89D6AB4CECC;// 0x0678(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0C47F4A1449161C9299253A82BB0C6D8;// 0x06C0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DA2C91974F4D704DF98FE28E3344D0DD;// 0x0770(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C7952ADE4987556A4C10D7A96F99C593;// 0x07B8(0x00E0)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0898(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_92F509EA483CBD7DB9F5409230D8ACEB;// 0x08A0(0x0380)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7B0170A74A6D43F372CD108F7A733BBD;// 0x0C20(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_67852FD5411E728E3332DE9FA4AF43F0;// 0x0C68(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_61300DE04B562021FDEB76B4941CBC2E;// 0x0CB0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_61358EC94B90CE0FB0362BA2195FD5AE;// 0x1030(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_74A5D9BB43430588835DCD83BF9B5A8C;// 0x13B0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_970B84C448ACB0F51252C1BAAA478A31;// 0x1730(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C88DFC68407BC18431DB2D9E9B2328E6;// 0x1AB0(0x0380)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C08D5BF44BC31002348BDD88B865B3BC;// 0x1E30(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5359D82D4A551AD00AA42FA9D85ED699;// 0x1F10(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE6CFA854AAA628B1F52398BE9B80D76;// 0x1F58(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_81673DB5424CE693E78362BEB28A4943;// 0x1FA0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2CF43244482C8B9CA1BE1EA76C0E33B9;// 0x1FE8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4335F1644841FF4A63D095AE0527BB25;// 0x2030(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B74913DF40BD09154A6966806FD0B693;// 0x20E0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_57E2D59E4A41916E0E79A4A3BFA74CE8;// 0x2128(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F756AD8D4E043C9083F9DF84E9C6E216;// 0x2198(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_777317A943E55E6D7F834C91DB7B6C8D;// 0x21E0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7F805DA849E65E0F223EBAB1A42ADAFC;// 0x2290(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C05C6986476F18EC96EE71959523A32B;// 0x22D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A68034E34DF50B65C85661AFB86890AF;// 0x2348(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_03CF5721446B3239F6836086C41A261A;// 0x2390(0x00E0)
	float                                              mDeltaTime;                                               // 0x2470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mTimeNotProducing;                                        // 0x2474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsProducing;                                             // 0x2478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mHasPower;                                                // 0x2479(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x247A(0x0002) MISSED OFFSET
	float                                              mAnimPlayRate;                                            // 0x247C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mRampItUpTime;                                            // 0x2480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mRampDownTime;                                            // 0x2484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    mSmokeParticle_01;                                        // 0x2488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mSmokeParticle_02;                                        // 0x2490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               mLaserBeamSocketArray;                                    // 0x2498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            mLaserBeamParticleArray;                                  // 0x24A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    mSparksParticle_01;                                       // 0x24B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mSparksParticle_02;                                       // 0x24C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_QuantumEncoder.Anim_QuantumEncoder_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_QuantumEncoder_AnimGraphNode_TransitionResult_A6EE2ACA4C52240F2B747E9D4787EF47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_QuantumEncoder_AnimGraphNode_TransitionResult_4ABA6622495E538BE53E81A34096B352();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_QuantumEncoder_AnimGraphNode_TransitionResult_36BD220C456811F8025569B1958728A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_QuantumEncoder_AnimGraphNode_SequencePlayer_DE980E0948DBEA123C5523B41071DF17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_QuantumEncoder_AnimGraphNode_SequencePlayer_51874C6C4C99FA1FB5153DA559F94B36();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_QuantumEncoder_AnimGraphNode_SequencePlayer_0C47F4A1449161C9299253A82BB0C6D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_QuantumEncoder_AnimGraphNode_TransitionResult_A7398B274706C007530B8786005A2764();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_QuantumEncoder_AnimGraphNode_TransitionResult_AE6CFA854AAA628B1F52398BE9B80D76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_QuantumEncoder_AnimGraphNode_TransitionResult_2CF43244482C8B9CA1BE1EA76C0E33B9();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_QuantumEncEnteredProducingState();
	void AnimNotify_QuantumEncLeftProducingState();
	void HasPowerChanged(bool State);
	void ExecuteUbergraph_Anim_QuantumEncoder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
