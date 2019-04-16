// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_MinimapNew_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MinimapNew.Widget_MinimapNew_C.SetOpenMap
// ()
// Parameters:
// bool                           OpenMap                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MinimapNew_C::SetOpenMap(bool OpenMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.SetOpenMap");

	UWidget_MinimapNew_C_SetOpenMap_Params params;
	params.OpenMap = OpenMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.GetFogPanelVisibility
// ()
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_MinimapNew_C::GetFogPanelVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.GetFogPanelVisibility");

	UWidget_MinimapNew_C_GetFogPanelVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.InitFogOfWar
// ()

void UWidget_MinimapNew_C::InitFogOfWar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.InitFogOfWar");

	UWidget_MinimapNew_C_InitFogOfWar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.CacheAllAreas
// ()

void UWidget_MinimapNew_C::CacheAllAreas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.CacheAllAreas");

	UWidget_MinimapNew_C_CacheAllAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.RemoveMapObjectForRepresentation
// ()
// Parameters:
// class UFGActorRepresentation*  actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MinimapNew_C::RemoveMapObjectForRepresentation(class UFGActorRepresentation* actorRepresentation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.RemoveMapObjectForRepresentation");

	UWidget_MinimapNew_C_RemoveMapObjectForRepresentation_Params params;
	params.actorRepresentation = actorRepresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.UpdateMapPan
// ()
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MinimapNew_C::UpdateMapPan(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.UpdateMapPan");

	UWidget_MinimapNew_C_UpdateMapPan_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.ClampMapPan
// ()

void UWidget_MinimapNew_C::ClampMapPan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.ClampMapPan");

	UWidget_MinimapNew_C_ClampMapPan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.OnMouseWheel
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_MinimapNew_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.OnMouseWheel");

	UWidget_MinimapNew_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.FindAndAddForActorRepresentations
// ()

void UWidget_MinimapNew_C::FindAndAddForActorRepresentations()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.FindAndAddForActorRepresentations");

	UWidget_MinimapNew_C_FindAndAddForActorRepresentations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.UpdateAllMapActors
// ()

void UWidget_MinimapNew_C::UpdateAllMapActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.UpdateAllMapActors");

	UWidget_MinimapNew_C_UpdateAllMapActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.AddMapObjectForRepresentation
// ()
// Parameters:
// class UFGActorRepresentation*  actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MinimapNew_C::AddMapObjectForRepresentation(class UFGActorRepresentation* actorRepresentation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.AddMapObjectForRepresentation");

	UWidget_MinimapNew_C_AddMapObjectForRepresentation_Params params;
	params.actorRepresentation = actorRepresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.GetMapPositionFromWorldLocation
// ()
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               MapPosition                    (Parm, OutParm, IsPlainOldData)

void UWidget_MinimapNew_C::GetMapPositionFromWorldLocation(const struct FVector& WorldLocation, struct FVector2D* MapPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.GetMapPositionFromWorldLocation");

	UWidget_MinimapNew_C_GetMapPositionFromWorldLocation_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapPosition != nullptr)
		*MapPosition = params.MapPosition;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.CleanUpAllDelegates
// ()

void UWidget_MinimapNew_C::CleanUpAllDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.CleanUpAllDelegates");

	UWidget_MinimapNew_C_CleanUpAllDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.FindCaptureActor
// ()
// Parameters:
// class ABP_MinimapCaptureActor_C* CaptureActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_MinimapNew_C::FindCaptureActor(class ABP_MinimapCaptureActor_C** CaptureActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.FindCaptureActor");

	UWidget_MinimapNew_C_FindCaptureActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CaptureActor != nullptr)
		*CaptureActor = params.CaptureActor;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.FindReferencePointAndScale
// ()

void UWidget_MinimapNew_C::FindReferencePointAndScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.FindReferencePointAndScale");

	UWidget_MinimapNew_C_FindReferencePointAndScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.Init
// ()

void UWidget_MinimapNew_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.Init");

	UWidget_MinimapNew_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.OnActorRepresentationAdded
// ()
// Parameters:
// class UFGActorRepresentation*  actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MinimapNew_C::OnActorRepresentationAdded(class UFGActorRepresentation* actorRepresentation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.OnActorRepresentationAdded");

	UWidget_MinimapNew_C_OnActorRepresentationAdded_Params params;
	params.actorRepresentation = actorRepresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.OnActorRepresentationRemoved
// ()
// Parameters:
// class UFGActorRepresentation*  actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MinimapNew_C::OnActorRepresentationRemoved(class UFGActorRepresentation* actorRepresentation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.OnActorRepresentationRemoved");

	UWidget_MinimapNew_C_OnActorRepresentationRemoved_Params params;
	params.actorRepresentation = actorRepresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.Destruct
// ()

void UWidget_MinimapNew_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.Destruct");

	UWidget_MinimapNew_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.Tick
// ()
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MinimapNew_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.Tick");

	UWidget_MinimapNew_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MinimapNew.Widget_MinimapNew_C.ExecuteUbergraph_Widget_MinimapNew
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MinimapNew_C::ExecuteUbergraph_Widget_MinimapNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MinimapNew.Widget_MinimapNew_C.ExecuteUbergraph_Widget_MinimapNew");

	UWidget_MinimapNew_C_ExecuteUbergraph_Widget_MinimapNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
