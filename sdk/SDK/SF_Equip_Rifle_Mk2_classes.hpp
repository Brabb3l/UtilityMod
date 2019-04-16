#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Equip_Rifle_Mk2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_Rifle_Mk2.Equip_Rifle_Mk2_C
// 0x0000 (0x042C - 0x042C)
class AEquip_Rifle_Mk2_C : public AEquip_Rifle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_Rifle_Mk2.Equip_Rifle_Mk2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
