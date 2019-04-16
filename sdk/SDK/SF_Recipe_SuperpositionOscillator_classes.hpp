#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Recipe_SuperpositionOscillator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Recipe_SuperpositionOscillator.Recipe_SuperpositionOscillator_C
// 0x0000 (0x0090 - 0x0090)
class URecipe_SuperpositionOscillator_C : public UFGRecipe
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_SuperpositionOscillator.Recipe_SuperpositionOscillator_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
