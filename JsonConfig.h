#pragma once

#include <iostream>
#include <fstream>
#include "external/json.hpp"

using json = nlohmann::json;

class JsonConfig {
public:
	static void save(const std::string& name, const json& data);
	static json load(const std::string & name, const json & defaultValues);

private:
	static json setDefaultValues(json j, const json & defaultValues);
	static bool exists(const std::string& name);
	static std::string defaultPath;
};