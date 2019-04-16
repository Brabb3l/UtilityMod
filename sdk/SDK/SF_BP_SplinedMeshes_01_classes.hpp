#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_SplinedMeshes_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SplinedMeshes_01.BP_SplinedMeshes_01_C
// 0x00E8 (0x0410 - 0x0328)
class ABP_SplinedMeshes_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USplineComponent*                            Spline;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_NewTrack_2_E5F6896B4A132968BB0BC9B976E6B36F;   // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_E5F6896B4A132968BB0BC9B976E6B36F;   // 0x0344(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Anim_13AD52804B59B139674ECD9E8EFE08FC;         // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_13AD52804B59B139674ECD9E8EFE08FC;   // 0x0354(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_13AD52804B59B139674ECD9E8EFE08FC;   // 0x0358(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                mNumberOfMeshs;                                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                mMeshes;                                                  // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            mMeshMaterials;                                           // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      mAnimRandom;                                              // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             mOffset;                                                  // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              mRandomiseOffset;                                         // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mRandomiseStart;                                          // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      mPositionRandom;                                          // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              mStartingPosition;                                        // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mMeshScale;                                               // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mLoopsPerMinute;                                          // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mAnimSpeed;                                               // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             mOffsetStart;                                             // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             mOffsetEnd;                                               // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              mOffsetDelay;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mClosedLoop;                                              // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	TArray<class UStaticMesh*>                         mMeshArray;                                               // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SplinedMeshes_01.BP_SplinedMeshes_01_C");
		return ptr;
	}


	void UpdateMesh(float Position, int Mesh);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SplinedMeshes_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
