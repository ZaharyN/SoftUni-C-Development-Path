#include <iostream>

using namespace std;

int main()
{
	int sumThreshold, currentNum;
	int sum = 0;

	cin >> sumThreshold;

	while (sum < sumThreshold)
	{
		cin >> currentNum;
		sum += currentNum;
	}

	cout << sum;

	return 0;
}