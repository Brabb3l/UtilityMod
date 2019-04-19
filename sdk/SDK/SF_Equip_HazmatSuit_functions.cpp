// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Equip_HazmatSuit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equip_HazmatSuit.Equip_HazmatSuit_C.AdjustDamage
// ()
// Parameters:
// float*                         damageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            instigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 damageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEquip_HazmatSuit_C::AdjustDamage(float* damageAmount, class UDamageType** DamageType, class AController** instigatedBy, class AActor** damageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.AdjustDamage");

	AEquip_HazmatSuit_C_AdjustDamage_Params params;
	params.damageAmount = damageAmount;
	params.DamageType = DamageType;
	params.instigatedBy = instigatedBy;
	params.damageCauser = damageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Equip_HazmatSuit.Equip_HazmatSuit_C.UserConstructionScript
// ()

void AEquip_HazmatSuit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.UserConstructionScript");

	AEquip_HazmatSuit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
