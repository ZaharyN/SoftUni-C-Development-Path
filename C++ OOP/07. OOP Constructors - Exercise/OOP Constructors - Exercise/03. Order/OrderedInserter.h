#ifndef ORDERED_INSERTER_H 
#define ORDERED_INSERTER_H

#include "Company.h"
#include <vector>
#include <algorithm>

class OrderedInserter
{
	std::vector<const Company*>& companies;
public:
	OrderedInserter(std::vector<const Company*>& input_compamies)
		: companies(input_compamies){ }

	void insert(const Company* company)
	{
		std::vector<const Company*>::const_iterator it = companies.begin();

		for (; it != companies.end(); it++)
		{
			if ((*it)->getId() > company->getId()) break;
		}

		companies.insert(it, company);
	}
};

#endif // !ORDERED_INSERTER_H
