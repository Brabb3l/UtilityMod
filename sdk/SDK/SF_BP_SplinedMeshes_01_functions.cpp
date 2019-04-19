// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_SplinedMeshes_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.UpdateMesh
// ()
// Parameters:
// float                          Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplinedMeshes_01_C::UpdateMesh(float Position, int Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.UpdateMesh");

	ABP_SplinedMeshes_01_C_UpdateMesh_Params params;
	params.Position = Position;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.UserConstructionScript
// ()

void ABP_SplinedMeshes_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.UserConstructionScript");

	ABP_SplinedMeshes_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.Timeline_0__FinishedFunc
// ()

void ABP_SplinedMeshes_01_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.Timeline_0__FinishedFunc");

	ABP_SplinedMeshes_01_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.Timeline_0__UpdateFunc
// ()

void ABP_SplinedMeshes_01_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.Timeline_0__UpdateFunc");

	ABP_SplinedMeshes_01_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.Timeline_1__FinishedFunc
// ()

void ABP_SplinedMeshes_01_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.Timeline_1__FinishedFunc");

	ABP_SplinedMeshes_01_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.Timeline_1__UpdateFunc
// ()

void ABP_SplinedMeshes_01_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.Timeline_1__UpdateFunc");

	ABP_SplinedMeshes_01_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.ReceiveBeginPlay
// ()

void ABP_SplinedMeshes_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.ReceiveBeginPlay");

	ABP_SplinedMeshes_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.ExecuteUbergraph_BP_SplinedMeshes_01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplinedMeshes_01_C::ExecuteUbergraph_BP_SplinedMeshes_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinedMeshes_01.BP_SplinedMeshes_01_C.ExecuteUbergraph_BP_SplinedMeshes_01");

	ABP_SplinedMeshes_01_C_ExecuteUbergraph_BP_SplinedMeshes_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
