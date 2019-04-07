#include "stdafx.h"
#include "CommandSystem.h"
#include <util/Utility.h>

const std::vector<std::string> split(const std::string& s, const char& c)
{
	std::string buff{ "" };
	std::vector<std::string> v;

	for (auto n : s) {
		if (n != c) {
			buff += n;
		}
		else if (n == c && buff != "") {
			v.push_back(buff);
			buff = "";
		}
	}

	if (buff != "")
		v.push_back(buff);

	return v;
}

CommandSystem::CommandSystem() {
	this->_observers = std::vector<CommandFunc>();
}

void CommandSystem::subscribe(CommandFunc func) {
	_observers.push_back(func);
}

bool CommandSystem::execute(std::string command, void * player) {
	if (command.length() < 2 || command[0] != '/')
		return true;

	info_mod("CommandSystem", "Executing command ", command);

	std::vector<std::string> commandArgs = split(command, ' ');
	std::string commandName = commandArgs[0].substr(1);

	commandArgs.erase(commandArgs.begin());

	for (CommandFunc func : _observers)
		func(commandName, commandArgs, player);
	
	return false;
}