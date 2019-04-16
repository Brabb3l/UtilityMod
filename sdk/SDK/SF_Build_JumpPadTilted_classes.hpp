#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_JumpPadTilted_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_JumpPadTilted.Build_JumpPadTilted_C
// 0x0000 (0x0670 - 0x0670)
class ABuild_JumpPadTilted_C : public ABuild_JumpPad_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_JumpPadTilted.Build_JumpPadTilted_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
