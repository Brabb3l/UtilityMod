#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Equip_JetPackMk2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_JetPackMk2.Equip_JetPackMk2_C
// 0x0008 (0x0408 - 0x0400)
class AEquip_JetPackMk2_C : public AEquip_JetPack_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_JetPackMk2.Equip_JetPackMk2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ConsumeFuel(float* Delta);
	void ExecuteUbergraph_Equip_JetPackMk2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
