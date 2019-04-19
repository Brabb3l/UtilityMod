#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_Ramp_8x1_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_Ramp_8x1_01.Build_Ramp_8x1_01_C
// 0x0008 (0x0578 - 0x0570)
class ABuild_Ramp_8x1_01_C : public AFGBuildableFoundation
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_Ramp_8x1_01.Build_Ramp_8x1_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
