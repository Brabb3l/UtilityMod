#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_SchematicCAT3_ADA-S19Message_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SchematicCAT3_ADA-S19Message.SchematicCAT3_ADA-S19Message_C
// 0x0000 (0x02E8 - 0x02E8)
class USchematicCAT3_ADA_S19Message_C : public UWidget_AudioMessage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SchematicCAT3_ADA-S19Message.SchematicCAT3_ADA-S19Message_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
