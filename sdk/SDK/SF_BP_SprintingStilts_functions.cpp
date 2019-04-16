// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_SprintingStilts_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SprintingStilts.BP_SprintingStilts_C.AdjustFallDamage
// ()
// Parameters:
// class AChar_Player_C*          Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Equip                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SprintingStilts_C::AdjustFallDamage(class AChar_Player_C* Player, bool Equip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.AdjustFallDamage");

	ABP_SprintingStilts_C_AdjustFallDamage_Params params;
	params.Player = Player;
	params.Equip = Equip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.AdjustJumpHeight
// ()
// Parameters:
// class AChar_Player_C*          Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Equip                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SprintingStilts_C::AdjustJumpHeight(class AChar_Player_C* Player, bool Equip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.AdjustJumpHeight");

	ABP_SprintingStilts_C_AdjustJumpHeight_Params params;
	params.Player = Player;
	params.Equip = Equip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.GetMaxSprintSpeed
// ()
// Parameters:
// class AChar_Player_C*          Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxSprintSpeed                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SprintingStilts_C::GetMaxSprintSpeed(class AChar_Player_C* Character, float* MaxSprintSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.GetMaxSprintSpeed");

	ABP_SprintingStilts_C_GetMaxSprintSpeed_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxSprintSpeed != nullptr)
		*MaxSprintSpeed = params.MaxSprintSpeed;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.GetMaxWalkSpeed
// ()
// Parameters:
// class AChar_Player_C*          Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxWalkSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SprintingStilts_C::GetMaxWalkSpeed(class AChar_Player_C* Character, float* MaxWalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.GetMaxWalkSpeed");

	ABP_SprintingStilts_C_GetMaxWalkSpeed_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.Undo1pOffset
// ()
// Parameters:
// class AChar_Player_C*          Player_Reference               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SprintingStilts_C::Undo1pOffset(class AChar_Player_C* Player_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.Undo1pOffset");

	ABP_SprintingStilts_C_Undo1pOffset_Params params;
	params.Player_Reference = Player_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.DestroyStilts
// ()

void ABP_SprintingStilts_C::DestroyStilts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.DestroyStilts");

	ABP_SprintingStilts_C_DestroyStilts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.Spawn1pStilts
// ()
// Parameters:
// class AChar_Player_C*          PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SprintingStilts_C::Spawn1pStilts(class AChar_Player_C* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.Spawn1pStilts");

	ABP_SprintingStilts_C_Spawn1pStilts_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.AdjustMovementSpeed
// ()
// Parameters:
// class AChar_Player_C*          PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Equip                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SprintingStilts_C::AdjustMovementSpeed(class AChar_Player_C* PlayerCharacter, bool Equip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.AdjustMovementSpeed");

	ABP_SprintingStilts_C_AdjustMovementSpeed_Params params;
	params.PlayerCharacter = PlayerCharacter;
	params.Equip = Equip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.UserConstructionScript
// ()

void ABP_SprintingStilts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.UserConstructionScript");

	ABP_SprintingStilts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.WasEquipped
// ()

void ABP_SprintingStilts_C::WasEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.WasEquipped");

	ABP_SprintingStilts_C_WasEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.WasUnEquipped
// ()

void ABP_SprintingStilts_C::WasUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.WasUnEquipped");

	ABP_SprintingStilts_C_WasUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.ReceiveBeginPlay
// ()

void ABP_SprintingStilts_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.ReceiveBeginPlay");

	ABP_SprintingStilts_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.TempDebug
// ()

void ABP_SprintingStilts_C::TempDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.TempDebug");

	ABP_SprintingStilts_C_TempDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SprintingStilts.BP_SprintingStilts_C.ExecuteUbergraph_BP_SprintingStilts
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SprintingStilts_C::ExecuteUbergraph_BP_SprintingStilts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SprintingStilts.BP_SprintingStilts_C.ExecuteUbergraph_BP_SprintingStilts");

	ABP_SprintingStilts_C_ExecuteUbergraph_BP_SprintingStilts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
