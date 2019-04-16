#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_MinimapNew_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_MinimapNew.Widget_MinimapNew_C.SetOpenMap
struct UWidget_MinimapNew_C_SetOpenMap_Params
{
	bool                                               OpenMap;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.GetFogPanelVisibility
struct UWidget_MinimapNew_C_GetFogPanelVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.InitFogOfWar
struct UWidget_MinimapNew_C_InitFogOfWar_Params
{
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.CacheAllAreas
struct UWidget_MinimapNew_C_CacheAllAreas_Params
{
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.RemoveMapObjectForRepresentation
struct UWidget_MinimapNew_C_RemoveMapObjectForRepresentation_Params
{
	class UFGActorRepresentation*                      actorRepresentation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.UpdateMapPan
struct UWidget_MinimapNew_C_UpdateMapPan_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.ClampMapPan
struct UWidget_MinimapNew_C_ClampMapPan_Params
{
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.OnMouseWheel
struct UWidget_MinimapNew_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.FindAndAddForActorRepresentations
struct UWidget_MinimapNew_C_FindAndAddForActorRepresentations_Params
{
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.UpdateAllMapActors
struct UWidget_MinimapNew_C_UpdateAllMapActors_Params
{
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.AddMapObjectForRepresentation
struct UWidget_MinimapNew_C_AddMapObjectForRepresentation_Params
{
	class UFGActorRepresentation*                      actorRepresentation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.GetMapPositionFromWorldLocation
struct UWidget_MinimapNew_C_GetMapPositionFromWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   MapPosition;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.CleanUpAllDelegates
struct UWidget_MinimapNew_C_CleanUpAllDelegates_Params
{
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.FindCaptureActor
struct UWidget_MinimapNew_C_FindCaptureActor_Params
{
	class ABP_MinimapCaptureActor_C*                   CaptureActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.FindReferencePointAndScale
struct UWidget_MinimapNew_C_FindReferencePointAndScale_Params
{
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.Init
struct UWidget_MinimapNew_C_Init_Params
{
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.OnActorRepresentationAdded
struct UWidget_MinimapNew_C_OnActorRepresentationAdded_Params
{
	class UFGActorRepresentation*                      actorRepresentation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.OnActorRepresentationRemoved
struct UWidget_MinimapNew_C_OnActorRepresentationRemoved_Params
{
	class UFGActorRepresentation*                      actorRepresentation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.Destruct
struct UWidget_MinimapNew_C_Destruct_Params
{
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.Tick
struct UWidget_MinimapNew_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MinimapNew.Widget_MinimapNew_C.ExecuteUbergraph_Widget_MinimapNew
struct UWidget_MinimapNew_C_ExecuteUbergraph_Widget_MinimapNew_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
