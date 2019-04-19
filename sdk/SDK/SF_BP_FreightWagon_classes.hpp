#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_FreightWagon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FreightWagon.BP_FreightWagon_C
// 0x0010 (0x0538 - 0x0528)
class ABP_FreightWagon_C : public AFGFreightWagon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0528(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      mWidget;                                                  // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FreightWagon.BP_FreightWagon_C");
		return ptr;
	}


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
	void OnUse(class AFGCharacterPlayer** byCharacter, struct FUseState* State);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_FreightWagon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
