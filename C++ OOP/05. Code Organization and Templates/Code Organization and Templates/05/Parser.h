#ifndef PARSER_H
#define PARSER_H

#include<iostream>
#include<sstream>
#include<string>

template<typename T> class Parser
{
private:
	std::istream& reader;
	std::string stopLine;
public:
	Parser(std::istream& is, const std::string& stopLine)
		: reader(is), stopLine(stopLine)
	{
	}

	bool readNext(T& element)
	{
		std::string currentLine;
		getline(reader, currentLine);

		if (currentLine == stopLine)
		{
			return false;
		}

		std::istringstream reader(currentLine);
		reader >> element;
		return true;
	}
};

#endif // !PARSER_H