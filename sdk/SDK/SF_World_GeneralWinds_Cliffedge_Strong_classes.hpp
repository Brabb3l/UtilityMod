#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_World_GeneralWinds_Cliffedge_Strong_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass World_GeneralWinds_Cliffedge_Strong.World_GeneralWinds_Cliffedge_Strong_C
// 0x0000 (0x0050 - 0x0050)
class UWorld_GeneralWinds_Cliffedge_Strong_C : public UFGAmbientSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass World_GeneralWinds_Cliffedge_Strong.World_GeneralWinds_Cliffedge_Strong_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
