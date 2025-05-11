#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	const int maxSize = 99;
	int arr1[maxSize] = {};
	int arr2[maxSize] = {};

	int n, a, b;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		if (i % 2 == 0)
		{
			arr1[i] = a;
			arr2[i] = b;
		}
		else
		{
			arr1[i] = b;
			arr2[i] = a;
		}
	}

	printArray(arr1, n);

	cout << endl;

	printArray(arr2, n);

	return 0;
}