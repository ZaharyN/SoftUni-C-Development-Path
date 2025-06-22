#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <cctype>

using namespace std;

int main()
{
	set<double> numbers;
	string input;
	getline(cin, input);
	istringstream reader(input);

	double currNum;
	while (reader >> currNum)
	{
		numbers.insert(currNum);
	}

	bool isFirst = true;
	for (double num : numbers)
	{
		if (isFirst)
		{
			cout << num;
			isFirst = false;
		}
		else
		{
			cout << " <= " << num;
		}
	}

	return 0;
}