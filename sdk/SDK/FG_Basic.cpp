// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include <Windows.h>
#include <Psapi.h>
#include "FG_Engine_classes.hpp"
#include "FG_CoreUObject_classes.hpp"

namespace SDK
{
	TNameEntryArray* FName::GNames = nullptr;
	FUObjectArray* UObject::GObjects = nullptr;
	UWorld** m_UWorld = nullptr;

	static bool DataCompare(PBYTE pData, PBYTE bSig, const char* szMask)
	{
		for (; *szMask; ++szMask, ++pData, ++bSig)
		{
			if (*szMask == 'x' && *pData != *bSig)
				return false;
		}
		return (*szMask) == 0;
	}

	static PBYTE FindPattern(PBYTE dwAddress, DWORD dwSize, PBYTE pbSig, const char* szMask, long offset)
	{
		size_t length = strlen(szMask);
		for (size_t i = NULL; i < dwSize - length; i++)
		{
			if (DataCompare(dwAddress + i, pbSig, szMask))
				return dwAddress + i + offset;
		}
		return 0;
	}

	static void InitSDK()
	{
		DWORD_PTR BaseAddress = (DWORD_PTR)GetModuleHandle(NULL);

		MODULEINFO ModuleInfo;
		GetModuleInformation(GetCurrentProcess(), (HMODULE)BaseAddress, &ModuleInfo, sizeof(ModuleInfo));

		auto GNameAddress = (DWORD_PTR)FindPattern((PBYTE)BaseAddress, ModuleInfo.SizeOfImage,
			(PBYTE)"\x48\x8B\x05\x00\x00\x00\x03\x48\x85\xC0\x0F\x85\xB0", "xxx???xxxxxxx", 0);
		auto GNameOffset = *reinterpret_cast<uint32_t*>(GNameAddress + 3);
		FName::GNames = *reinterpret_cast<TNameEntryArray**>(GNameAddress + 7 + GNameOffset);

		auto GObjectsAddress = (DWORD_PTR)FindPattern((PBYTE)BaseAddress, ModuleInfo.SizeOfImage,
			(PBYTE)"\x48\x8D\x0D\x00\x00\x00\x04\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x01", "xxx???xx???xx???xx???x", 0);
		auto GObjectsOffset = *reinterpret_cast<uint32_t*>(GObjectsAddress + 3);
		UObject::GObjects = reinterpret_cast<FUObjectArray*>(GObjectsAddress + 7 + GObjectsOffset);

		auto UWorldAddress = (DWORD_PTR)FindPattern((PBYTE)BaseAddress, ModuleInfo.SizeOfImage,
			(PBYTE)"\x48\x8B\x1D\x00\x00\x00\x04\x48\x85\xDB\x74\x3B", "xxx???xxxxxx", 0);
		auto UWorldOffset = *reinterpret_cast<uint32_t*>(UWorldAddress + 3);
		m_UWorld = reinterpret_cast<UWorld**>(UWorldAddress + 7 + UWorldOffset);
	}
}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
