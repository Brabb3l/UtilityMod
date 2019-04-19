#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Char_Spitter_Alternative_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Char_Spitter_Alternative.Char_Spitter_Alternative_C
// 0x0035 (0x09A5 - 0x0970)
class AChar_Spitter_Alternative_C : public AFGEnemy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (Transient, DuplicateTransient)
	bool                                               mIsStrafing;                                              // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0979(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStrafeEnded;                                            // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTimerHandle                                mStrafeHandler;                                           // 0x0990(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     mStrafeDirection;                                         // 0x0998(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               mDoStrafeRight;                                           // 0x09A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Char_Spitter_Alternative.Char_Spitter_Alternative_C");
		return ptr;
	}


	struct FVector GetAttackLocation();
	void UpdateStrafeDirection();
	void StopStrafe();
	void DoStrafe();
	void StartStrafe();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnCurrentAggroTargetReplicated();
	void ExecuteUbergraph_Char_Spitter_Alternative(int EntryPoint);
	void OnStrafeEnded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
