#include "Register.h"

Register::Register(size_t numCompanies)
	: companiesArray(new Company[numCompanies]), numAdded(0) { }

void Register::add(const Company& c)
{
	companiesArray[numAdded++] = c;
}

Company Register::get(int companyId) const
{
	for (size_t i = 0; i < numAdded; i++)
	{
		if (companiesArray[i].getId() == companyId)
		{
			return companiesArray[i];
		}
	}
	return Company();
}

Register::~Register()
{
	if (companiesArray != nullptr)
	{
		delete[] companiesArray;
	}
}