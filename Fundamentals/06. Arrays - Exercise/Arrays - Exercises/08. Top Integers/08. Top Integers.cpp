#include <iostream>

using namespace std;

int main()
{
	const int maxSize = 99;
	int arr[maxSize] = {};

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	bool isBigger;

	for (int i = 0; i < n; i++)
	{
		int currentNum = arr[i];
		isBigger = true;

		for (int j = i + 1; j < n; j++)
		{
			if (currentNum <= arr[j])
			{
				isBigger = false;
				break;
			}
		}
		if (isBigger)
		{
			cout << currentNum << " ";
		}
	}

	return 0;
}