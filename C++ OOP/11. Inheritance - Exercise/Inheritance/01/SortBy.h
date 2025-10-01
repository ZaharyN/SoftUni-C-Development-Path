#ifndef SORT_BY_H
#define SORT_BY_H

#include "Company.h"
#include <algorithm>


void sortBy(Company** firstCompany, Company** lastCompany, bool (*comparator)(const Company& a, const Company& b))
{
	std::sort(firstCompany, lastCompany, [&comparator](Company* a, Company* b)
		{
			return comparator(*a, *b);
		});
}


#endif // !SORT_BY_H
