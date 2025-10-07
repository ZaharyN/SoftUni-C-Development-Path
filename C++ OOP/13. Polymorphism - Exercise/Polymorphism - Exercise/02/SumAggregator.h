#pragma once

#include "Aggregator.h"
#include<sstream>

class SumAggregator : public StreamAggregator
{
public:
	SumAggregator(std::istream& input) : StreamAggregator(input)
	{
		aggregationResult = 0;
	}

protected:
	virtual void aggregate(int next) override
	{
		aggregationResult += next;
	}
};