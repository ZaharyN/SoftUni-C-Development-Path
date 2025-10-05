#ifndef SERIALIZE_H
#define SERIALIZE_H

#include "Company.h"
#include<string>
#include<sstream>
#include<vector>

byte* serializeToMemory(const std::string& input, std::size_t& length)
{
	std::istringstream companiesIn(input);
	std::vector<Company> companies;

	// The first byte is for the number of companies
	length = 1;

	Company currentCompany;
	try
	{
		while (companiesIn >> currentCompany)
		{
			// This byte is for the id
			length++;

			// Bytes for the company name length + null terminating byte '0'
			length += currentCompany.getName().size() + 1;

			// Byte for number of employees
			length++;

			// Bytes for number of employees * 2 because each employee has 2 bytes per name
			length += currentCompany.getEmployees().size() * 2;

			companies.push_back(currentCompany);
		}
	}
	catch (const std::exception& ex)
	{

	}

	if (companies.empty())
	{
		length = 1;
	}
	
	byte* result = new byte[length];
	int currentIndex = 0;
	
	result[currentIndex++] = companies.size();

	for (const Company& company : companies)
	{
		result[currentIndex++] = company.getId();

		for (const char& el : company.getName())
		{
			result[currentIndex++] = el;
		}

		result[currentIndex++] = '\0';
		result[currentIndex++] = company.getEmployees().size();

		for (std::size_t i = 0; i < company.getEmployees().size(); i++)
		{
			result[currentIndex++] = company.getEmployees()[i].first;
			result[currentIndex++] = company.getEmployees()[i].second;
		}
	}

	return result;
}


#endif // !SERIALIZE_H
