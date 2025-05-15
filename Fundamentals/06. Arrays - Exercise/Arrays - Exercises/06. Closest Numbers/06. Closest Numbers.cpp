#include <iostream>
#include <climits>

using namespace std;

int main()
{
	const int maxSize = 99;
	int arr[maxSize];

	int n;
	cin >> n;

	if (n <= 1)
	{
		cout << 0;
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int minDifference = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (i == j) continue;

			int currentDiff = abs(arr[i] - arr[j]);

			if (currentDiff < minDifference)
			{
				minDifference = currentDiff;
			}
		}
	}

	cout << abs(minDifference) << endl;

	return 0;
}