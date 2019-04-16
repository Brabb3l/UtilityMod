#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_BuildMenu_PowerProduction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C
// 0x0010 (0x0218 - 0x0208)
class UWidget_BuildMenu_PowerProduction_C : public UUserWidget
{
public:
	class UTextBlock*                                  TextBlock_1;                                              // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                      mBuildingDesc;                                            // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BuildMenu_PowerProduction.Widget_BuildMenu_PowerProduction_C");
		return ptr;
	}


	ESlateVisibility GetProductionVisibility();
	struct FText GetPowerProductionText();
	struct FLinearColor GetOrangeColor();
	struct FSlateColor GetDarkGrayText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
