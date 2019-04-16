#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Attach_Rifle_Mk2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Attach_Rifle_Mk2.Attach_Rifle_Mk2_C
// 0x0000 (0x0388 - 0x0388)
class AAttach_Rifle_Mk2_C : public AAttach_Rifle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attach_Rifle_Mk2.Attach_Rifle_Mk2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
