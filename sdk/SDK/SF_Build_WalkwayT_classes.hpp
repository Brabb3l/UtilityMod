#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_WalkwayT_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_WalkwayT.Build_WalkwayT_C
// 0x0000 (0x0570 - 0x0570)
class ABuild_WalkwayT_C : public AFGBuildableWalkway
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_WalkwayT.Build_WalkwayT_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
