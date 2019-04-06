#pragma once

#include <string>
#include <vector>

typedef void(*CommandFunc)(std::string command, std::vector<std::string> args, void * player);

class CommandSystem
{
public:
	CommandSystem();
	bool execute(std::string command, void * player);
	void subscribe(CommandFunc func);
private:
	std::vector<CommandFunc> _observers;
};

