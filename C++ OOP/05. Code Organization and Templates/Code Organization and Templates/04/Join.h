#ifndef JOIN_H
#define JOIN_H

#include<vector>
#include<sstream>

template<typename T>
std::string join(const std::vector<T>& v, const std::string& joinStr)
{
	std::ostringstream os;

	for (size_t i = 0; i < v.size(); i++)
	{
		if (i == 0)
		{
			os << v[i];
			continue;
		}
		os << joinStr <<v[i];
	}
	os << std::endl;

	return os.str();
}


#endif // !JOIN_H