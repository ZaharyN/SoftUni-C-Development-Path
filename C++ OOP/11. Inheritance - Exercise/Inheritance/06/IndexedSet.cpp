#include "IndexedSet.h"

// Constructor
IndexedSet::IndexedSet()
{
	valuesArray = nullptr;
}

// Copy constructor
IndexedSet::IndexedSet(const IndexedSet& other)
{
	valuesSet = other.valuesSet;

	this->valuesArray = nullptr;
	if (other.valuesArray != nullptr)
	{
		this->buildIndex();
	}
}

void IndexedSet::add(const Value& v)
{
	if (valuesSet.insert(v).second)
	{
		clearIndex();
	}
}

size_t IndexedSet::size() const { return valuesSet.size(); }

const Value& IndexedSet::operator[](size_t index)
{
	// First time callling
	if (valuesArray == nullptr && !valuesSet.empty())
	{
		buildIndex();
	}

	return valuesArray[index];
}

IndexedSet& IndexedSet::operator=(const IndexedSet& other)
{
	if (this == &other) return *this;

	clearIndex();
	this->valuesSet.clear();

	// handle set copying
	this->valuesSet = other.valuesSet;

	// handle array copying
	if (other.valuesArray != nullptr)
	{
		this->buildIndex();
	}

	return *this;
}

// Destructor
IndexedSet::~IndexedSet()
{
	clearIndex();
	valuesSet.clear();
}

void IndexedSet::buildIndex()
{
	clearIndex();

	valuesArray = new Value[valuesSet.size()];

	int index = 0;
	for (auto it = valuesSet.begin(); it != valuesSet.end(); it++)
	{
		valuesArray[index++] = *it;
	}
}

void IndexedSet::clearIndex()
{
	if (valuesArray != nullptr)
	{
		delete[] valuesArray;
		valuesArray = nullptr;
	}
}