// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_C4Explosive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_C4Explosive.BP_C4Explosive_C.ShouldSave
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_C4Explosive_C::ShouldSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_C4Explosive.BP_C4Explosive_C.ShouldSave");

	ABP_C4Explosive_C_ShouldSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_C4Explosive.BP_C4Explosive_C.GatherDependencies
// ()
// Parameters:
// TArray<class UObject*>         out_dependentObjects           (Parm, OutParm, ZeroConstructor)

void ABP_C4Explosive_C::GatherDependencies(TArray<class UObject*>* out_dependentObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_C4Explosive.BP_C4Explosive_C.GatherDependencies");

	ABP_C4Explosive_C_GatherDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_dependentObjects != nullptr)
		*out_dependentObjects = params.out_dependentObjects;
}


// Function BP_C4Explosive.BP_C4Explosive_C.NeedTransform
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_C4Explosive_C::NeedTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_C4Explosive.BP_C4Explosive_C.NeedTransform");

	ABP_C4Explosive_C_NeedTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_C4Explosive.BP_C4Explosive_C.UserConstructionScript
// ()

void ABP_C4Explosive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_C4Explosive.BP_C4Explosive_C.UserConstructionScript");

	ABP_C4Explosive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_C4Explosive.BP_C4Explosive_C.PostLoadGame
// ()
// Parameters:
// int                            SaveVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_C4Explosive_C::PostLoadGame(int SaveVersion, int GameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_C4Explosive.BP_C4Explosive_C.PostLoadGame");

	ABP_C4Explosive_C_PostLoadGame_Params params;
	params.SaveVersion = SaveVersion;
	params.GameVersion = GameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_C4Explosive.BP_C4Explosive_C.PostSaveGame
// ()
// Parameters:
// int                            SaveVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_C4Explosive_C::PostSaveGame(int SaveVersion, int GameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_C4Explosive.BP_C4Explosive_C.PostSaveGame");

	ABP_C4Explosive_C_PostSaveGame_Params params;
	params.SaveVersion = SaveVersion;
	params.GameVersion = GameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_C4Explosive.BP_C4Explosive_C.PreLoadGame
// ()
// Parameters:
// int                            SaveVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_C4Explosive_C::PreLoadGame(int SaveVersion, int GameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_C4Explosive.BP_C4Explosive_C.PreLoadGame");

	ABP_C4Explosive_C_PreLoadGame_Params params;
	params.SaveVersion = SaveVersion;
	params.GameVersion = GameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_C4Explosive.BP_C4Explosive_C.PreSaveGame
// ()
// Parameters:
// int                            SaveVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_C4Explosive_C::PreSaveGame(int SaveVersion, int GameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_C4Explosive.BP_C4Explosive_C.PreSaveGame");

	ABP_C4Explosive_C_PreSaveGame_Params params;
	params.SaveVersion = SaveVersion;
	params.GameVersion = GameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_C4Explosive.BP_C4Explosive_C.PlayExplosionEffects
// ()

void ABP_C4Explosive_C::PlayExplosionEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_C4Explosive.BP_C4Explosive_C.PlayExplosionEffects");

	ABP_C4Explosive_C_PlayExplosionEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_C4Explosive.BP_C4Explosive_C.ExecuteUbergraph_BP_C4Explosive
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_C4Explosive_C::ExecuteUbergraph_BP_C4Explosive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_C4Explosive.BP_C4Explosive_C.ExecuteUbergraph_BP_C4Explosive");

	ABP_C4Explosive_C_ExecuteUbergraph_BP_C4Explosive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
