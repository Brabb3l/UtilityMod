#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Schematic2-1_ADA-S03Message_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Schematic2-1_ADA-S03Message.Schematic2-1_ADA-S03Message_C
// 0x0000 (0x02E8 - 0x02E8)
class USchematic2_1_ADA_S03Message_C : public UWidget_AudioMessage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Schematic2-1_ADA-S03Message.Schematic2-1_ADA-S03Message_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
