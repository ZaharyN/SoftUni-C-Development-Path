#ifndef FIND_H
#define FIND_H

#include "Company.h"
#include<vector>
#include <algorithm>

Company* find(const std::vector<Company*>& companies, const int companyId)
{
	std::vector<Company*>::const_iterator it = std::find_if(companies.begin(), companies.end(),
		[&](Company* curr)
		{
			return curr->getId() == companyId;
		});

	return it != companies.end() ? *it : nullptr;
}


#endif // !FIND_H
