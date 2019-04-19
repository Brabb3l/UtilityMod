#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_TranslucentWater_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TranslucentWater.BP_TranslucentWater_C
// 0x007C (0x03A4 - 0x0328)
class ABP_TranslucentWater_C : public AActor
{
public:
	class UStaticMeshComponent*                        WaterSurface;                                             // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          Ocean_Material;                                           // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Water_Scale_X;                                            // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Water_Scale_Y;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Wave_Speed;                                               // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Water_Material;                                           // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Overall_Water_Scale;                                      // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Variation_Amount;                                         // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Primary_Water_Color;                                      // 0x0358(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Secondary_Water_Color;                                    // 0x0368(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Base_Opacity;                                             // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shore_Depth;                                              // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Depth_Scale;                                              // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Deep_Water_Color;                                         // 0x0384(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Shallow_Water_Color;                                      // 0x0394(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TranslucentWater.BP_TranslucentWater_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
