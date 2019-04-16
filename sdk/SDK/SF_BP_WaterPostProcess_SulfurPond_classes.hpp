#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_WaterPostProcess_SulfurPond_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaterPostProcess_SulfurPond.BP_WaterPostProcess_SulfurPond_C
// 0x0000 (0x0560 - 0x0560)
class UBP_WaterPostProcess_SulfurPond_C : public UFGSharedPostProcessSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterPostProcess_SulfurPond.BP_WaterPostProcess_SulfurPond_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
