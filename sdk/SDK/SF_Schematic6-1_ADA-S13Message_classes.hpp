#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Schematic6-1_ADA-S13Message_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Schematic6-1_ADA-S13Message.Schematic6-1_ADA-S13Message_C
// 0x0000 (0x02E8 - 0x02E8)
class USchematic6_1_ADA_S13Message_C : public UWidget_AudioMessage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Schematic6-1_ADA-S13Message.Schematic6-1_ADA-S13Message_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
