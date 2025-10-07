#pragma once

#include "Aggregator.h"
#include<sstream>
#include<climits>

class MinAggregator : public StreamAggregator
{
public:
	MinAggregator(std::istream& input) : StreamAggregator(input)
	{
		aggregationResult = INT_MAX;
	}

protected:
	virtual void aggregate(int next) override
	{
		if (next < aggregationResult)
		{
			aggregationResult = next;
		}
	}
};