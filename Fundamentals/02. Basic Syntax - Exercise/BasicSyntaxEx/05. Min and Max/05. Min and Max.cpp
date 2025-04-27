#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int n, currentNum;
	cin >> n;

	int min = INT_MAX;
	int max = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		cin >> currentNum;

		if (currentNum > max)
		{
			max = currentNum;
		}
		if (currentNum < min)
		{
			min = currentNum;
		}
	}

	cout << min << " " << max;

	return 0;
}