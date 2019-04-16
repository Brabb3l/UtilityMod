#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_WheeledVehicle6W_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WheeledVehicle6W.BP_WheeledVehicle6W_C
// 0x0008 (0x0840 - 0x0838)
class ABP_WheeledVehicle6W_C : public ABP_WheeledVehicle_C
{
public:
	class UFGWheeledVehicleMovementComponent6W*        FGWheeledVehicleMovementComponent6W;                      // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WheeledVehicle6W.BP_WheeledVehicle6W_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
