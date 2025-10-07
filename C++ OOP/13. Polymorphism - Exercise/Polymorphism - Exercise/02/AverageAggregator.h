#pragma once

#include "Aggregator.h"
#include<sstream>

class AverageAggregator : public StreamAggregator
{
	int sum;
public:
	AverageAggregator(std::istream& input) : StreamAggregator(input) 
	{
		aggregationResult = 0;
		sum = 0;
	}

protected:
	virtual void aggregate(int next) override
	{
		StreamAggregator::aggregate(next);

		sum += next;
		aggregationResult = sum / this->getNumAggregated();
	}
};