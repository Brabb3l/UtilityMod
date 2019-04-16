#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Schematic6-4_ADA-S16Message_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Schematic6-4_ADA-S16Message.Schematic6-4_ADA-S16Message_C
// 0x0000 (0x02E8 - 0x02E8)
class USchematic6_4_ADA_S16Message_C : public UWidget_AudioMessage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Schematic6-4_ADA-S16Message.Schematic6-4_ADA-S16Message_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
