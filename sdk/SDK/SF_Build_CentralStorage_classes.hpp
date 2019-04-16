#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_CentralStorage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_CentralStorage.Build_CentralStorage_C
// 0x0030 (0x0680 - 0x0650)
class ABuild_CentralStorage_C : public AFGCentralStorageContainer
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryConnectionComponent*               Input0;                                                   // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FogPlane;                                                 // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryLegsComponent*                     FGFactoryLegs;                                            // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MainMesh;                                                 // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Clearance;                                                // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_CentralStorage.Build_CentralStorage_C");
		return ptr;
	}


	ECompassRepresentationType GetActorCompassRepresentationType();
	bool RemoveAsRepresentation();
	struct FRotator GetRealActorRotation();
	struct FVector GetRealActorLocation();
	struct FLinearColor GetActorCompassColor();
	bool GetActorShouldShowInComapss();
	bool GetActorShouldShowOnMap();
	bool AddAsRepresentation();
	struct FText GetActorCompassText();
	class UTexture2D* GetActorCompassTexture();
	bool IsActorStatic();
	bool CanDismantle();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
