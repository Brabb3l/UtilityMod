#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Schematic2-3_ADA-S05Message_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Schematic2-3_ADA-S05Message.Schematic2-3_ADA-S05Message_C
// 0x0000 (0x02E8 - 0x02E8)
class USchematic2_3_ADA_S05Message_C : public UWidget_AudioMessage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Schematic2-3_ADA-S05Message.Schematic2-3_ADA-S05Message_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
