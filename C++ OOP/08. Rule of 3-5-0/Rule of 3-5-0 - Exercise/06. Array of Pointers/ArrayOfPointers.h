#ifndef ARRAY_OF_POINTERS
#define ARRAY_OF_POINTERS

#include "Company.h"
#include<vector>

class ArrayOfPointers
{
	std::vector<Company*> companies;
	int currentSize;

public:
	ArrayOfPointers();

	void add(Company* company);

	size_t getSize() const;

	Company* get(int index) const;

	ArrayOfPointers(const ArrayOfPointers& other) = delete;

	ArrayOfPointers& operator=(ArrayOfPointers& other) = delete;

	~ArrayOfPointers();
};


#endif // !ARRAY_OF_POINTERS
