#include "Range.h"
#include<algorithm>

Range::Range() : rangeFirst(0), rangeLength(0), valueCounts(nullptr) {}

void Range::add(T value)
{
	T first = rangeFirst;
	T last = rangeFirst + rangeLength - 1;

	if (empty())
	{
		resize(value, value);
	}
	else if (value < first)
	{
		resize(value, last);
	}
	else if (value > last)
	{
		resize(first, value);
	}

	valueCounts[getIndex(value)]++;
}

size_t Range::getCount(T value) const
{
	if (value < rangeFirst || value >= rangeFirst + rangeLength) return 0;

	return valueCounts[getIndex(value)];
}

void Range::clear()
{
	rangeFirst = 0;
	rangeLength = 0;
	if (valueCounts != nullptr)
	{
		delete valueCounts;
	}
	valueCounts = nullptr;
}

void Range::resize(T first, T last)
{
	T newFirst = first;
	T newLength = last - first + 1;

	size_t* newCounts = new size_t[newLength]{ 0 };
	if (!empty())
	{
		std::copy(valueCounts,
			valueCounts + rangeLength,
			newCounts + (rangeFirst - newFirst));

		clear(); 
	}

	rangeFirst = newFirst;
	rangeLength = newLength;
	valueCounts = newCounts;
}

bool Range::empty() const
{
	return rangeLength == 0;
}

size_t Range::getIndex(T value) const
{
	return value - rangeFirst;
}

Range::Range(const Range& other) : Range()
{
	*this = other;
}

Range& Range::operator=(const Range& other)
{
	clear();
	valueCounts = copyValues(other);
	rangeFirst = other.rangeFirst;
	rangeLength = other.rangeLength;

	return *this;
}

Range::~Range()
{
	clear();
}