#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_FreightWagon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_FreightWagon.Widget_FreightWagon_C.DropInventorySlotStack
struct UWidget_FreightWagon_C_DropInventorySlotStack_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WasStackMoved;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_FreightWagon.Widget_FreightWagon_C.UpdateHeaderText
struct UWidget_FreightWagon_C_UpdateHeaderText_Params
{
};

// Function Widget_FreightWagon.Widget_FreightWagon_C.Init
struct UWidget_FreightWagon_C_Init_Params
{
};

// Function Widget_FreightWagon.Widget_FreightWagon_C.CloseStorage
struct UWidget_FreightWagon_C_CloseStorage_Params
{
};

// Function Widget_FreightWagon.Widget_FreightWagon_C.Construct
struct UWidget_FreightWagon_C_Construct_Params
{
};

// Function Widget_FreightWagon.Widget_FreightWagon_C.ExecuteUbergraph_Widget_FreightWagon
struct UWidget_FreightWagon_C_ExecuteUbergraph_Widget_FreightWagon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
