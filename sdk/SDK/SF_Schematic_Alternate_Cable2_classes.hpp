#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Schematic_Alternate_Cable2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Schematic_Alternate_Cable2.Schematic_Alternate_Cable2_C
// 0x0000 (0x0140 - 0x0140)
class USchematic_Alternate_Cable2_C : public UFGSchematic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Schematic_Alternate_Cable2.Schematic_Alternate_Cable2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
