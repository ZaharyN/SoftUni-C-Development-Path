#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	vector<int> numbers;
	vector<int> gaussArray;
	string input;
	getline(cin, input);
	istringstream numberString(input);
	int num;

	while (numberString >> num)
	{
		numbers.push_back(num);
	}

	for (int start = 0, finish = numbers.size() - 1; start <= finish; start++, finish--)
	{
		if (start != finish)
		{
			gaussArray.push_back(numbers[start] + numbers[finish]);
		}
		else
		{
			gaussArray.push_back(numbers[start]);
		}
	}

	for (int n : gaussArray)
	{
		cout << n << " ";
	}

	return 0;
}