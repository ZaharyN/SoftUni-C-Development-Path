#ifndef REMOVE_INVALID_H
#define REMOVE_INVALID_H

#include "Company.h"

void removeInvalid(std::list<Company*>& companies)
{

	companies.remove_if([](Company* curr)
		{
			if (curr->getId() < 0)
			{
				delete curr;
				return true;
			}
			return false;
		});

	//Second solution:
	//for (std::list<Company*>::iterator it = companies.begin(); it != companies.end();)
	//{
	//	//Company* current = *it;
	//	if ((*it)->getId() < 0)
	//	{
	//		delete* it;
	//		it = companies.erase(it);
	//	}
	//	else
	//	{
	//		it++;
	//	}
	//}

	/*First solution:
	std::list<Company*>::iterator it = companies.begin();

	while (it != companies.end())
	{
		Company* current = *it;

		if (current->getId() < 0)
		{
			it = companies.erase(it);
			delete current;
		}
		else
		{
			it++;
		}
	}*/
}

#endif // !REMOVE_INVALID_H
