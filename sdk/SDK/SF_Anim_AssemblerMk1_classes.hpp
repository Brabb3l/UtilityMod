#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Anim_AssemblerMk1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_AssemblerMk1.Anim_AssemblerMk1_C
// 0x0C21 (0x0F81 - 0x0360)
class UAnim_AssemblerMk1_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5B73716844A2D0290BC592896E78C551;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8137253C4353512E202D7CAEB7E92D7C;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5AFDB1A9479287D6D7498C966839D2E4;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C329F9794DF9ED9C60304CB317DD9789;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_49548B0747AD1DC75E1BA7825FF79FBC;// 0x0488(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94647BC74F8CC1495A20CAA51141D723;// 0x04D0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F3F508844C3D96D17265C3A4EC16B7E6;// 0x0580(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F6ACFAC41CC49EDD61E66AF0C91E3A1;// 0x05C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5EDABC4D41D85D5AF57E6B9690D0D1C4;// 0x0678(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8850069D4AA1BA949D8539A21E4A14ED;// 0x06C0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3974605F4D45B5A0A9E8859E30763A1D;// 0x0770(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F92DE6B546AE04363BDEA08D25600945;// 0x07B8(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AD70144D4176CB15F969319E148E1CAD;// 0x0898(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1CEFF83543FDFC2AA7280490EC14ED04;// 0x0978(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_56A39FA24B70F097CAE83FB5EF656952;// 0x09C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F5FD74CF4665DC291CF9D7B1F5DE98AA;// 0x0A08(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E6ABA23E42EA726002BC46939CEDDF17;// 0x0A50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_720DE7C5401D2CDC636A1F87CC1705DC;// 0x0A98(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E948DF4B42FC43EBB614A98201F5601D;// 0x0B48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E0B2A2443EC3C18B19B52BD7F75756B;// 0x0B90(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_608000764B46C8C221199FAD05152414;// 0x0C40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7BD77244404AF927571788980580B17B;// 0x0C88(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E03E3DCF4006B2D497BA45AAA31F28FD;// 0x0D38(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D5698DBE4AEEC2F2248BB7896EC831A6;// 0x0D80(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F80C59A245881AF8D789B1B2AEF5FA5A;// 0x0E60(0x00D0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F922B2C74330FE89FF4C29847DF9DECC;// 0x0F30(0x0038)
	bool                                               mIsProducing;                                             // 0x0F68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mHasPower;                                                // 0x0F69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0F6A(0x0002) MISSED OFFSET
	float                                              mDeltaTime;                                               // 0x0F6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mRampItUpTime;                                            // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mRampDownTime;                                            // 0x0F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mAnimPlayRate;                                            // 0x0F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mTimeNotProducing;                                        // 0x0F7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsIndustrial;                                            // 0x0F80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_AssemblerMk1.Anim_AssemblerMk1_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_SequencePlayer_94647BC74F8CC1495A20CAA51141D723();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_TransitionResult_49548B0747AD1DC75E1BA7825FF79FBC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_SequencePlayer_4F6ACFAC41CC49EDD61E66AF0C91E3A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_SequencePlayer_8850069D4AA1BA949D8539A21E4A14ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_TransitionResult_C329F9794DF9ED9C60304CB317DD9789();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_TransitionResult_1CEFF83543FDFC2AA7280490EC14ED04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_TransitionResult_56A39FA24B70F097CAE83FB5EF656952();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_TransitionResult_F5FD74CF4665DC291CF9D7B1F5DE98AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_TransitionResult_E6ABA23E42EA726002BC46939CEDDF17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_TransitionResult_5AFDB1A9479287D6D7498C966839D2E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_SequencePlayer_720DE7C5401D2CDC636A1F87CC1705DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_SequencePlayer_4E0B2A2443EC3C18B19B52BD7F75756B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_TransitionResult_8137253C4353512E202D7CAEB7E92D7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_SequencePlayer_7BD77244404AF927571788980580B17B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_AssemblerMk1_AnimGraphNode_BlendListByBool_F80C59A245881AF8D789B1B2AEF5FA5A();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_ConstructorAdvEnteredProducing();
	void AnimNotify_ConstructorAdvLeftProducing();
	void AnimNotify_ConstructorAdvLeftOffline();
	void AnimNotify_ConstructorAdvEnteredOffline();
	void HasPowerChanged(bool State);
	void ExecuteUbergraph_Anim_AssemblerMk1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
