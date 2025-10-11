#pragma once

#include<string> 
#include<vector> 
#include<map> 

City* initCity(const std::string& name, const size_t& population)
{
	return new City(name, population);
}

std::map<size_t, const City*> groupByPopulation(std::vector<const City*> cities, size_t& totalPopulation)
{
	std::map<size_t, const City*> result;
	totalPopulation = 0;

	for (const City* city : cities)
	{
		result[city->getPopulation()] = city;
		totalPopulation += city->getPopulation();
	}

	return result;
}