#include "Echo.h"

bool echoOn = false;

void echo(const std::string& input)
{
	if (!echoOn) return;
	std::cout << input << std::endl;
}