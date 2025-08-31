#ifndef SPLIT_H
#define SPLIT_H

#include<iostream>
#include<vector>
#include<string>
#include<sstream>

template<typename T>
std::vector<T> split(const std::string& line, const char& separator)
{
	std::vector<T> elements;
	T element;
	std::istringstream reader(line);
	std::string current;
	while (std::getline(reader, current, separator))
	{
		std::istringstream ss(current);
		ss >> element;
		elements.push_back(element);
	}
	
	return elements;
}


#endif // !SPLIT_H