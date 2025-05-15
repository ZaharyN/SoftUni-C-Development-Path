#include <iostream>

using namespace std;

int main()
{
	const int maxSize = 99;
	int arr[maxSize] = {};

	int n, magicSum;
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> magicSum;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] + arr[j] == magicSum)
			{
				cout << arr[i] << " " << arr[j] << endl;
			}
		}
	}

	return 0;
}