#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_WalkShake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WalkShake.WalkShake_C
// 0x0000 (0x0160 - 0x0160)
class UWalkShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WalkShake.WalkShake_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
