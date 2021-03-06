// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_ChatMessageRow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetPlayerNameColor
// ()
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_ChatMessageRow_C::GetPlayerNameColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetPlayerNameColor");

	UWidget_ChatMessageRow_C_GetPlayerNameColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetPlayerName
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_ChatMessageRow_C::GetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetPlayerName");

	UWidget_ChatMessageRow_C_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetChatText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_ChatMessageRow_C::GetChatText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.GetChatText");

	UWidget_ChatMessageRow_C_GetChatText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.Construct
// ()

void UWidget_ChatMessageRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.Construct");

	UWidget_ChatMessageRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.RemoveWidgetAfterDelay
// ()
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ChatMessageRow_C::RemoveWidgetAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.RemoveWidgetAfterDelay");

	UWidget_ChatMessageRow_C_RemoveWidgetAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.ExecuteUbergraph_Widget_ChatMessageRow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ChatMessageRow_C::ExecuteUbergraph_Widget_ChatMessageRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatMessageRow.Widget_ChatMessageRow_C.ExecuteUbergraph_Widget_ChatMessageRow");

	UWidget_ChatMessageRow_C_ExecuteUbergraph_Widget_ChatMessageRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
