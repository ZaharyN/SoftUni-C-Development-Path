#include "Register.h"

#include<algorithm>

Register::Register(size_t numCompanies)
{
	companiesArray = new Company[numCompanies];
	numAdded = 0;
}

void Register::add(const Company& c)
{
	companiesArray[numAdded] = c;
	numAdded++;
}

Company Register::get(int companyId) const
{
	for (size_t it = 0; it < numAdded; it++)
	{
		if (companiesArray[it].getId() == companyId)
		{
			return companiesArray[it];
		}
	}

	return companiesArray[0];
}

Register::~Register()
{
	if (companiesArray != nullptr)
	{
		delete[] companiesArray;
	}
}

Register& Register::operator=(const Register& other)
{
	Company* newArray = new Company[other.numAdded];
	std::copy(other.companiesArray, other.companiesArray + other.numAdded, newArray);

	delete[] companiesArray;
	companiesArray = newArray;
	numAdded = other.numAdded;

	return *this;
}

Register::Register(const Register& other)
{
	numAdded = 0;
	*this = other;
}