#include <map>
#include <climits>

class Range
{
	int from, to;

public:
	Range(){}
	Range(int from, int to) 
		: from(from), to(to){ }

	const bool isInRange(int num) const { return num >= from && num <= to; }

	const int getFrom() const { return this->from; }
	const int getTo() const { return this->to; }
};

class RangeData
{
	int minFrom = INT_MAX;
	int maxTo = INT_MIN;

	std::map<int, Range> ranges;

public:
	RangeData(){}

	void addRange(const Range& range)
	{
		ranges[range.getFrom()] = range;
	}

	bool IsInRange(const int& num)
	{
		auto it = ranges.upper_bound(num);

		if (it == ranges.begin()) return false;

		it--;
		return it->second.isInRange(num);
	}
	
	const int getMinFrom() const { return this->minFrom; }
	const int getMaxTo() const { return this->maxTo; }
};