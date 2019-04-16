#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Desc_NobeliskDetonator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Desc_NobeliskDetonator.Desc_NobeliskDetonator_C
// 0x0000 (0x0130 - 0x0130)
class UDesc_NobeliskDetonator_C : public UFGEquipmentDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Desc_NobeliskDetonator.Desc_NobeliskDetonator_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
