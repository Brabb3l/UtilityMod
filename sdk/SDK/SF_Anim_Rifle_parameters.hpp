#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Anim_Rifle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Anim_Rifle.Anim_Rifle_C.IsEquipped
struct UAnim_Rifle_C_IsEquipped_Params
{
	class UClass*                                      EquipmentClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquiped;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Anim_Rifle.Anim_Rifle_C.BlueprintUpdateAnimation
struct UAnim_Rifle_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anim_Rifle.Anim_Rifle_C.ExecuteUbergraph_Anim_Rifle
struct UAnim_Rifle_C_ExecuteUbergraph_Anim_Rifle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
