#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Basic.hpp"
#include "SF_CoreUObject_classes.hpp"
#include "SF_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameAnalyticsModule.EAnalyticsServiceType
enum class EAnalyticsServiceType : uint8_t
{
	EAST_StatHat                   = 0,
	EAST_GoogleAnalytics           = 1,
	EAST_MAX                       = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
