#include <iostream>
#include <sstream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

bool comparer(int a, int b)
{
	return a > b;
}

int main()
{
	list<int> nums;
	list<int> greaterThanAvg;
	string input;
	getline(cin, input);

	istringstream reader(input);
	int curr;
	int total = 0;

	while (reader >> curr)
	{
		total += curr;
		nums.push_back(curr);
	}

	float average = (float)total / nums.size();

	for (int n : nums)
	{
		if (n > average)
		{
			greaterThanAvg.push_back(n);
		}
	}
	if (greaterThanAvg.empty())
	{
		cout << "No" << endl;
		return 0;
	}

	greaterThanAvg.sort(comparer);
	int maxElements = 5;
	int counter = 0;

	for (list<int>::iterator it = greaterThanAvg.begin(); it != greaterThanAvg.end() && counter++ < maxElements; it++)
	{
		cout << *it << " ";
	}

	return 0;
}