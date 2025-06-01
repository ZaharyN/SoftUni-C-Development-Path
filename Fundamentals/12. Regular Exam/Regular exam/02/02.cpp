#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int maxSize = 100;
	vector<int> numbers;
	numbers.reserve(maxSize);

	int n;
	cin >> n;

	int currentNum;
	for (int i = 0; i < n; i++)
	{
		cin >> currentNum;
		numbers.push_back(currentNum);
	}

	int totalSum = 0;
	while (numbers.size() > 1)
	{
		n = numbers.size();
		for (int i = 1; i < n; i++)
		{
			numbers[i - 1] = numbers[i - 1] + numbers[i];

			if (i == n - 1)
			{
				numbers.pop_back();
			}
		}
	}

	cout << numbers[0];

	return 0;
}