#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_SprintingStiltsAttachment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SprintingStiltsAttachment.BP_SprintingStiltsAttachment_C
// 0x0008 (0x0368 - 0x0360)
class ABP_SprintingStiltsAttachment_C : public AFGEquipmentAttachment
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SprintingStiltsAttachment.BP_SprintingStiltsAttachment_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
