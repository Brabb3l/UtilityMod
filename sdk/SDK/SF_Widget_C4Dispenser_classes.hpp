#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_C4Dispenser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_C4Dispenser.Widget_C4Dispenser_C
// 0x0008 (0x0210 - 0x0208)
class UWidget_C4Dispenser_C : public UUserWidget
{
public:
	class UProgressBar*                                mC4Throwbar;                                              // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_C4Dispenser.Widget_C4Dispenser_C");
		return ptr;
	}


	ESlateVisibility Get_mC4Throwbar_Visibility_1();
	struct FLinearColor Get_mC4Throwbar_FillColorAndOpacity_1();
	float GetThrowPercent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
