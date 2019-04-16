#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_CentralStorage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_CentralStorage.Build_CentralStorage_C.GetActorCompassRepresentationType
struct ABuild_CentralStorage_C_GetActorCompassRepresentationType_Params
{
	ECompassRepresentationType                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_CentralStorage.Build_CentralStorage_C.RemoveAsRepresentation
struct ABuild_CentralStorage_C_RemoveAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_CentralStorage.Build_CentralStorage_C.GetRealActorRotation
struct ABuild_CentralStorage_C_GetRealActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Build_CentralStorage.Build_CentralStorage_C.GetRealActorLocation
struct ABuild_CentralStorage_C_GetRealActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Build_CentralStorage.Build_CentralStorage_C.GetActorCompassColor
struct ABuild_CentralStorage_C_GetActorCompassColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Build_CentralStorage.Build_CentralStorage_C.GetActorShouldShowInComapss
struct ABuild_CentralStorage_C_GetActorShouldShowInComapss_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_CentralStorage.Build_CentralStorage_C.GetActorShouldShowOnMap
struct ABuild_CentralStorage_C_GetActorShouldShowOnMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_CentralStorage.Build_CentralStorage_C.AddAsRepresentation
struct ABuild_CentralStorage_C_AddAsRepresentation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_CentralStorage.Build_CentralStorage_C.GetActorCompassText
struct ABuild_CentralStorage_C_GetActorCompassText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Build_CentralStorage.Build_CentralStorage_C.GetActorCompassTexture
struct ABuild_CentralStorage_C_GetActorCompassTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_CentralStorage.Build_CentralStorage_C.IsActorStatic
struct ABuild_CentralStorage_C_IsActorStatic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_CentralStorage.Build_CentralStorage_C.CanDismantle
struct ABuild_CentralStorage_C_CanDismantle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_CentralStorage.Build_CentralStorage_C.UserConstructionScript
struct ABuild_CentralStorage_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
