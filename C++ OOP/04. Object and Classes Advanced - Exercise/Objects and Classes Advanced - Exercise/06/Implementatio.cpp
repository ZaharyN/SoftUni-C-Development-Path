#include "Defines.h"
#include <vector>
#include<string>
#include<sstream>


ErrorCode executeCommand(const std::string& command, std::vector<int*>& memory)
{
	std::string actualCmd;
	std::istringstream reader(command);
	reader >> actualCmd;

	if (actualCmd == "Allocate")
	{

	}
	else if (actualCmd == "Deallocate")
	{

	}
	else if (actualCmd == "Idle")
	{

	}
}

void printResult(const ErrorCode errorCode, const std::string& command)
{

}