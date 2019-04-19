// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BTT_FindTrackPath_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_FindTrackPath.BTT_FindTrackPath_C.FindPath
// ()
// Parameters:
// int                            Train                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGBuildableRailroadStation* Stop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRailroadPathFindingResult Result                         (Parm, OutParm)
// class AFGLocomotive*           Locomotive                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_FindTrackPath_C::FindPath(int Train, class AFGBuildableRailroadStation* Stop, bool* Success, struct FRailroadPathFindingResult* Result, class AFGLocomotive** Locomotive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_FindTrackPath.BTT_FindTrackPath_C.FindPath");

	UBTT_FindTrackPath_C_FindPath_Params params;
	params.Train = Train;
	params.Stop = Stop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Result != nullptr)
		*Result = params.Result;
	if (Locomotive != nullptr)
		*Locomotive = params.Locomotive;
}


// Function BTT_FindTrackPath.BTT_FindTrackPath_C.ReportError
// ()
// Parameters:
// struct FText                   MESSAGE                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBTT_FindTrackPath_C::ReportError(const struct FText& MESSAGE)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_FindTrackPath.BTT_FindTrackPath_C.ReportError");

	UBTT_FindTrackPath_C_ReportError_Params params;
	params.MESSAGE = MESSAGE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_FindTrackPath.BTT_FindTrackPath_C.ReceiveExecuteAI
// ()
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_FindTrackPath_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_FindTrackPath.BTT_FindTrackPath_C.ReceiveExecuteAI");

	UBTT_FindTrackPath_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_FindTrackPath.BTT_FindTrackPath_C.ExecuteUbergraph_BTT_FindTrackPath
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_FindTrackPath_C::ExecuteUbergraph_BTT_FindTrackPath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_FindTrackPath.BTT_FindTrackPath_C.ExecuteUbergraph_BTT_FindTrackPath");

	UBTT_FindTrackPath_C_ExecuteUbergraph_BTT_FindTrackPath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
