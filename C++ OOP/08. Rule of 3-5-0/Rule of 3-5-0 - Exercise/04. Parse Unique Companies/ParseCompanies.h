#ifndef PARSE_COMPANIES_H
#define PARSE_COMPANIES_H

#include "Company.h"
#include<set>

Company* parseUniqueCompanies(const std::string& ostr, int& vectorSize, std::string(*functor)(const Company& c))
{
	std::vector<Company> uniqueCompanies;
	std::set<std::string> seen;
	vectorSize = 0;

	std::istringstream reader(ostr);
	std::string line;

	while (std::getline(reader, line))
	{
		int id;
		std::string name;
		std::istringstream readLine(line);
		readLine >> id >> name;

		Company curr(id, name);
		const std::string key = functor(curr);

		if (seen.find(key) == seen.end())
		{
			uniqueCompanies.push_back(curr);
			seen.insert(key);
			vectorSize++;
		}
	}

	Company* result = new Company[vectorSize];
	
	for (int i = 0; i < vectorSize; i++)
	{
		result[i] = uniqueCompanies[i];
	}

	return result;
}

#endif // !PARSE_COMPANIES_H
