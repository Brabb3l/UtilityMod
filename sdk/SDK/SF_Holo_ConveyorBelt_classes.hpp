#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Holo_ConveyorBelt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Holo_ConveyorBelt.Holo_ConveyorBelt_C
// 0x0000 (0x0488 - 0x0488)
class AHolo_ConveyorBelt_C : public AFGConveyorBeltHologram
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Holo_ConveyorBelt.Holo_ConveyorBelt_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
