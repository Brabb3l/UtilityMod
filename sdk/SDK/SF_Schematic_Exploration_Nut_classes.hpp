#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Schematic_Exploration_Nut_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Schematic_Exploration_Nut.Schematic_Exploration_Nut_C
// 0x0000 (0x0140 - 0x0140)
class USchematic_Exploration_Nut_C : public UFGSchematic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Schematic_Exploration_Nut.Schematic_Exploration_Nut_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
