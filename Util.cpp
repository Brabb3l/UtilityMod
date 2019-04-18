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