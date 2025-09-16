#ifndef MIN_BY_H
#define MIN_BY_H

#include<vector>
#include<string>

std::string minBy(const std::vector<std::string>& values, bool(*comparator)(const std::string& a, const std::string& b))
{
	std::string result = values[0];
	for (const std::string& current : values)
	{
		if (comparator(current, result))
		{
			result = current;
		}
	}
	return result;
}

#endif // !MIN_BY_H
