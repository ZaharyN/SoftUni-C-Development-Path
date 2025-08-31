#ifndef PRINTUTILS_H
#define PRINTUTILS_H

#include<vector>
#include<iostream>

template<typename T>

void printContainer(typename T::iterator begin, typename T::iterator end)
{
	for (; begin != end; begin++)
	{
		std::cout << *begin << " ";
	}

	std::cout << std::endl;
}

#endif // !PRINTUTILS_H
