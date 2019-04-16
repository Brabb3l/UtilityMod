#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_PowerLine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_PowerLine.Build_PowerLine_C
// 0x0008 (0x0598 - 0x0590)
class ABuild_PowerLine_C : public AFGBuildableWire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_PowerLine.Build_PowerLine_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Build_PowerLine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
