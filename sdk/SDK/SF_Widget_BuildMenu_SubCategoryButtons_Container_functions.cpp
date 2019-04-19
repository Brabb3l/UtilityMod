// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_BuildMenu_SubCategoryButtons_Container_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_BuildMenu_SubCategoryButtons_Container.Widget_BuildMenu_SubCategoryButtons_Container_C.Get_divider_ColorAndOpacity_1
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UWidget_BuildMenu_SubCategoryButtons_Container_C::Get_divider_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_SubCategoryButtons_Container.Widget_BuildMenu_SubCategoryButtons_Container_C.Get_divider_ColorAndOpacity_1");

	UWidget_BuildMenu_SubCategoryButtons_Container_C_Get_divider_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
