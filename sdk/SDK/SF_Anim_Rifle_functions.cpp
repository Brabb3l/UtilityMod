// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Anim_Rifle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Anim_Rifle.Anim_Rifle_C.IsEquipped
// ()
// Parameters:
// class UClass*                  EquipmentClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEquiped                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnim_Rifle_C::IsEquipped(class UClass* EquipmentClass, bool* IsEquiped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_Rifle.Anim_Rifle_C.IsEquipped");

	UAnim_Rifle_C_IsEquipped_Params params;
	params.EquipmentClass = EquipmentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEquiped != nullptr)
		*IsEquiped = params.IsEquiped;
}


// Function Anim_Rifle.Anim_Rifle_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnim_Rifle_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_Rifle.Anim_Rifle_C.BlueprintUpdateAnimation");

	UAnim_Rifle_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_Rifle.Anim_Rifle_C.ExecuteUbergraph_Anim_Rifle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnim_Rifle_C::ExecuteUbergraph_Anim_Rifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_Rifle.Anim_Rifle_C.ExecuteUbergraph_Anim_Rifle");

	UAnim_Rifle_C_ExecuteUbergraph_Anim_Rifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
