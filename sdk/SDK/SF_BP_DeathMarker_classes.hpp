#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_DeathMarker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DeathMarker.BP_DeathMarker_C
// 0x0018 (0x0340 - 0x0328)
class ABP_DeathMarker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeathMarker.BP_DeathMarker_C");
		return ptr;
	}


	bool ShouldSave();
	void GatherDependencies(TArray<class UObject*>* out_dependentObjects);
	bool NeedTransform();
	ECompassRepresentationType GetActorCompassRepresentationType();
	bool AddAsRepresentation();
	struct FLinearColor GetActorCompassColor();
	struct FText GetActorCompassText();
	class UTexture2D* GetActorCompassTexture();
	bool GetActorShouldShowInComapss();
	bool GetActorShouldShowOnMap();
	struct FVector GetRealActorLocation();
	struct FRotator GetRealActorRotation();
	bool IsActorStatic();
	bool RemoveAsRepresentation();
	void UserConstructionScript();
	void PostLoadGame(int SaveVersion, int GameVersion);
	void PostSaveGame(int SaveVersion, int GameVersion);
	void PreLoadGame(int SaveVersion, int GameVersion);
	void PreSaveGame(int SaveVersion, int GameVersion);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_DeathMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
