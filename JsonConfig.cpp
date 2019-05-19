#include "stdafx.h"
#include "JsonConfig.h"

std::string JsonConfig::defaultPath = "config\\";

void JsonConfig::save(const std::string& name, const json& data) {
	std::string path = std::string(defaultPath);
	path.append(name);
	path.append(".cfg");

	// dump
	std::ofstream out;
	out.open(path);

	try {
		if (out.is_open())
			out << data.dump(4);
	} catch (...) {}

	out.close();
}

json JsonConfig::load(const std::string& name, const json& defaultValues) {
	if (!exists(name)) {
		save(name, defaultValues);

		return defaultValues;
	}

	std::string path = std::string(defaultPath);
	path.append(name);
	path.append(".cfg");

	json loadedJson;

	// read
	std::ifstream in;
	in.open(path);

	std::string content = "";
	std::string line;

	try {
		while (getline(in, line))
			content += line;

		loadedJson = json::parse(content);
	} catch (...) {}

	in.close();

	loadedJson = setDefaultValues(loadedJson, defaultValues);

	save(name, loadedJson); // save changes
	
	return loadedJson;
}

json JsonConfig::setDefaultValues(json j, const json& defaultValues) {
	for (auto it : defaultValues.items()) {
		auto key = it.key();
		auto value = it.value();

		// Add if not existing
		if (j.find(key) == j.end()) {
			j[key] = value;
			continue;
		}

		if (key.length() < 1 || key[0] != '$') { // ignore type checks if key[0] == '$'
			auto jvalue = j[key];

			// number type check
			if (value.is_number_integer()) {
				if (jvalue.is_number_integer())
					continue;
			}
			else if (value.is_number() && jvalue.is_number()) {
				continue;
			}

			// Override if wrong type
			if (value.type() != j[key].type()) {
				j[key] = value;
				continue;
			}
		}

		// iterate over sub object
		if (value.is_object())
			j[key] = setDefaultValues(j[key], value);
	}

	json jduplicate = j;

	for (auto it : jduplicate.items()) {
		auto key = it.key();

		// Remove if unused
		if (!defaultValues.contains(key))
			j.erase(key);
	}

	return j;
}

bool JsonConfig::exists(const std::string& name) {
	std::string path = std::string(defaultPath);
	path.append(name);
	path.append(".cfg");

	// check
	std::ifstream config(path);

	bool good = config.good();

	config.close();

	return good;
}