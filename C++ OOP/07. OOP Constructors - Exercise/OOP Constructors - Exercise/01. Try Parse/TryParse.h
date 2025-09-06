#ifndef TRY_PARSE_H
#define TRY_PARSE_H

#include<string>
#include<sstream>

class TryParse
{
	std::istringstream reader;
	int& container;

public:
	TryParse(const std::string& istr, int& cont)
		:reader(istr), container(cont)
	{
		reader >> container;
	}

	inline operator bool() const
	{
		return (bool)reader;
	}
};

bool tryParse(std::string& reader, int& container)
{
	TryParse parser(reader, container);
	return parser;
}


 

#endif // !TRY_PARSE_H

