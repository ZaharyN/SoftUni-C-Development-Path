#pragma once

#include<vector>
#include<iostream>
#include<sstream>

#include "City.h"

std::istream& operator>>(std::istream& reader, City& cityToRead)
{
	std::string cityName;
	size_t popuplation;
	unsigned int censusYear;

	reader >> cityName >> popuplation >> censusYear;

	cityToRead = City(censusYear, cityName, popuplation);

	return reader;
}

class CityDiff
{
public:

	City a;
	City b;

	CityDiff(const City& first, const City& second) : a(first), b(second)
	{

	}
};

CityDiff operator-(const City& a, const City& b)
{
	return CityDiff(a, b);
}

std::ostream& operator<<(std::ostream& output, const CityDiff& cityDiff)
{
	if (cityDiff.a.getName() == cityDiff.b.getName())
	{
		output << cityDiff.a.getName() << " (" << cityDiff.a.getCensusYear() << " vs. " << cityDiff.b.getCensusYear() << ")" << std::endl;
	}
	else
	{
		output << cityDiff.a.getName() << " (" << cityDiff.a.getCensusYear() << ")" << " vs. " << cityDiff.b.getName() << " (" << cityDiff.b.getCensusYear() << ")" << std::endl;
	}

	int populationDiff = cityDiff.a.getPopulation() - cityDiff.b.getPopulation();
	output << "population: " << (populationDiff >= 0 ? "+" : "") << populationDiff << std::endl;

	return output;
}