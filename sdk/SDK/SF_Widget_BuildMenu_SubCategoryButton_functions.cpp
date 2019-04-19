// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_BuildMenu_SubCategoryButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.GetSubCategoryName
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_BuildMenu_SubCategoryButton_C::GetSubCategoryName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.GetSubCategoryName");

	UWidget_BuildMenu_SubCategoryButton_C_GetSubCategoryName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
