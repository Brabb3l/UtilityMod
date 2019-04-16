#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_SchematicCAT2_ADA-S18Message_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SchematicCAT2_ADA-S18Message.SchematicCAT2_ADA-S18Message_C
// 0x0000 (0x02E8 - 0x02E8)
class USchematicCAT2_ADA_S18Message_C : public UWidget_AudioMessage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SchematicCAT2_ADA-S18Message.SchematicCAT2_ADA-S18Message_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
