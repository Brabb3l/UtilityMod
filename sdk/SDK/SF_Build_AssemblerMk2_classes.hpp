#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_AssemblerMk2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_AssemblerMk2.Build_AssemblerMk2_C
// 0x0000 (0x06E9 - 0x06E9)
class ABuild_AssemblerMk2_C : public ABuild_AssemblerMk1_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_AssemblerMk2.Build_AssemblerMk2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
