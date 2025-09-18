#include "ArrayOfPointers.h"

ArrayOfPointers::ArrayOfPointers()
	: currentSize(0) { }

void ArrayOfPointers::add(Company* company)
{
	if (company != nullptr)
	{
		companies.push_back(company);
		currentSize++;
	}
}

size_t ArrayOfPointers::getSize() const
{
	return currentSize;
}

Company* ArrayOfPointers::get(int index) const
{
	if (currentSize >= index)
	{
		return companies[index];
	}

	return companies[0];
}

ArrayOfPointers::~ArrayOfPointers()
{
	for (Company* company : companies)
	{
		delete company;
	}
}