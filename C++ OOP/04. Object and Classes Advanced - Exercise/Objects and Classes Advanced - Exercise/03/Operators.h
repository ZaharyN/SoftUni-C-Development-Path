#ifndef OPERATORS_H
#define OPERATORS_H

#include <ostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string>& operator<<(std::vector<std::string>& v1, const std::string& line)
{
	v1.push_back(line);
	return v1;
}

std::string operator+(std::string& s, const int num)
{
	std::ostringstream result;
	result << s << num;
	return result.str();
}

std::ostream& operator<<(std::ostream& writer, const std::vector<std::string>& v1)
{
	for (size_t i = 0; i < v1.size(); i++)
	{
		const std::string& currentline = v1[i];
		writer << currentline << std::endl;
	}

	return writer;
}

#endif // !OPERATORS_H
