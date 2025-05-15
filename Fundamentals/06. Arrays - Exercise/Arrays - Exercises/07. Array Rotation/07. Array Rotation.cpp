#include <iostream>

using namespace std;

int main()
{
	const int maxSize = 9;
	int arr[maxSize] = {};

	int n, rotations;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> rotations;

	for (int i = 0; i < rotations; i++)
	{
		int lastElement = arr[0];
		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
			if (j == n - 1)
			{
				arr[j] = lastElement;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}