#pragma once

#include "sdk/SDK.hpp"

class Util {
public:
	static bool startsWith(const std::string& str, const std::string& start);
	static bool is_number(const std::string& s);
	static bool is_float(const std::string &in);
	static void sendMessage(std::wstring msg);
	static FVector AngleToDirectionalVector(double angle);
	static void Normalize(FVector & vector);
	static FVector Add(const FVector & vector, const FVector & addVector);
	static FVector Subtract(const FVector & vector, const FVector & addVector);
	static FVector Mutliply(const FVector & vector, const float & mult);
	static FVector Lerp(const FVector & start, const FVector & end, const float & percent);
	static FVector Floor(const FVector & vector);
	static FVector Rotate(const FVector & vector, double angle);
	static int GetKey(const std::string& key);
	static FInventoryStack MakeItemStack(const std::string& itemname, const int& amount);
	static bool DataCompare(PBYTE data, PBYTE signature, const char* szMask);
	static PBYTE FindPattern(PBYTE start, DWORD size, PBYTE signature, const char* szMask);
};