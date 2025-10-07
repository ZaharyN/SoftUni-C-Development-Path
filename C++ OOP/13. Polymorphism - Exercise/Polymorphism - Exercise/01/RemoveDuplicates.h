#pragma once

#include<list>
#include<set>
#include "Company.h"

void removeDuplicates(std::list<Company*>::iterator itCurr, std::list<Company*>& companies)
{
	std::set<Company*> companiesToDelete;
	Company* original = *itCurr;

	itCurr++;
	while (itCurr != companies.end())
	{
		// Check for pointer duplicate
		if (*itCurr == original)
		{
			itCurr = companies.erase(itCurr);
		}
		else if (original->getName() == (*itCurr)->getName())
		{
			companiesToDelete.insert(*itCurr);
			itCurr = companies.erase(itCurr);
		}
		else
		{
			itCurr++;
		}
	}

	for (auto company : companiesToDelete)
	{
		delete company;
	}
}

void removeDuplicates(std::list<Company*>& companies)
{
	std::list<Company*>::iterator it = companies.begin();
	while (it != companies.end())
	{
		removeDuplicates(it, companies);
		it++;
	}
}