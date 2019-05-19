#include "stdafx.h"

#include "Util.h"

#include <sstream>

#include "Global.h"
#include "ExampleMod.h"

#define PI 3.14159265358979323846
#define RADIAN (PI / 180)

bool Util::startsWith(const std::string& str, const std::string& start) {
	if (&start == &str) return true;
	if (start.length() > str.length()) return false;
	for (size_t i = 0; i < start.length(); ++i) {
		if (start[i] != str[i]) return false;
	}
	return true;
}

bool Util::is_number(const std::string& s) {
	std::string::const_iterator it = s.begin();
	while (it != s.end() && isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

bool Util::is_float(const std::string &in) {
	std::stringstream sstr(in);
	float f;
	return !((sstr >> std::noskipws >> f).rdstate() ^ std::ios_base::eofbit);
}

void Util::sendMessage(std::wstring msg) {
	static_cast<AFGPlayerController*>(Global::m_LocalPlayer->PlayerController)->EnterChatMessage(FString(msg.c_str()));
}

// Convert an angle to a vector
FVector Util::AngleToDirectionalVector(double angle) {
	FVector vector = FVector();

	vector.X = cos(angle * RADIAN);
	vector.Y = sin(angle * RADIAN);

	return vector;
}

// Normalize FVector
void Util::Normalize(FVector& vector) {
	float magnitude = sqrt(vector.X * vector.X + vector.Y * vector.Y + vector.Z * vector.Z);

	vector.X /= magnitude;
	vector.Y /= magnitude;
	vector.Z /= magnitude;
}

// Add to FVector
FVector Util::Add(const FVector& vector, const FVector& addVector) {
	FVector result = FVector();

	result.X = vector.X + addVector.X;
	result.Y = vector.Y + addVector.Y;
	result.Z = vector.Z + addVector.Z;

	return result;
}

// Subtract to FVector
FVector Util::Subtract(const FVector& vector, const FVector& subVector) {
	FVector result = FVector();

	result.X = vector.X - subVector.X;
	result.Y = vector.Y - subVector.Y;
	result.Z = vector.Z - subVector.Z;

	return result;
}

// Mutliply FVector
FVector Util::Mutliply(const FVector& vector, const float& mult) {
	FVector result = FVector();

	result.X = vector.X * mult;
	result.Y = vector.Y * mult;
	result.Z = vector.Z * mult;

	return result;
}

// Lerp a FVector
FVector Util::Lerp(const FVector& start, const FVector& end, const float& percent) {
	return Add(start, Mutliply(Subtract(end, start), percent > 1 ? 1 : percent));
}

// Floor a FVector
FVector Util::Floor(const FVector& vector) {
	FVector result = FVector();

	result.X = floor(vector.X);
	result.Y = floor(vector.Y);
	result.Z = floor(vector.Z);

	return result;
}

// Rotate FVector
FVector Util::Rotate(const FVector& vector, double angle) {
	double cs = cos(angle * RADIAN);
	double sn = sin(angle * RADIAN);

	double px = vector.X * cs - vector.Y * sn;
	double py = vector.X * sn + vector.Y * cs;

	FVector result = FVector();

	result.X = px;
	result.Y = py;
	result.Z = vector.Z;

	return result;
}

// Get key code by name/character
int Util::GetKey(const std::string& key) {
	if (key.length() == 1) {
		int keyCode = key[0];

		if (keyCode >= '0' && keyCode <= '9' || keyCode >= 'A' && keyCode <= 'Z') {
			return keyCode;
		}
		else if (keyCode >= 'a' && keyCode <= 'z') {
			return 'A' + ('a' - keyCode);
		}
	}
	else {
		if (key == "UP") {
			return VK_UP;
		}
		if (key == "DOWN") {
			return VK_DOWN;
		}
		if (key == "LEFT") {
			return VK_LEFT;
		}
		if (key == "RIGHT") {
			return VK_RIGHT;
		}
		if (key == "SHIFT") {
			return VK_LSHIFT;
		}
		if (key == "CONTROL") {
			return VK_LCONTROL;
		}
		if (key == "SPACE") {
			return VK_SPACE;
		}
		if (key == "TAB") {
			return VK_TAB;
		}
		if (key == "ALT") {
			return VK_LMENU;
		}
	}

	SML::mod_warning(UtilityMod::name, "Unable to find key '" + key + "'");

	return 0;
}

FInventoryStack Util::MakeItemStack(const std::string& itemname, const int& amount) {
	FInventoryStack stack = FInventoryStack();
	FInventoryItem item = FInventoryItem();

	item.ItemClass = Global::items.at(itemname);

	stack.Item = item;
	stack.NumItems = amount;

	return stack;
}

PBYTE Util::FindPattern(PBYTE start, DWORD size, PBYTE signature, const char* szMask)
{
	size_t length = strlen(szMask);
	for (size_t i = NULL; i < size - length; i++)
	{
		if (DataCompare(start + i, signature, szMask))
			return start + i;
	}
	return nullptr;
}

bool Util::DataCompare(PBYTE data, PBYTE signature, const char* szMask)
{
	for (; *szMask; ++szMask, ++data, ++signature)
	{
		if (*szMask == 'x' && *data != *signature)
			return false;
	}
	return (*szMask) == 0;
}