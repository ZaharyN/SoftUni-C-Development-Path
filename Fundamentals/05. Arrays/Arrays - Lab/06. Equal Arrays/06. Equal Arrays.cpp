#include <iostream>

using namespace std;

void FillArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

int main()
{
	const int maxSize = 99;
	int arr1[maxSize] = {};
	int arr2[maxSize] = {};

	int n;
	cin >> n;

	FillArray(arr1, n);
	FillArray(arr2, n);

	int elementsSum = 0;
	
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] != arr2[i])
		{
			cout << "Arrays are not identical. Found difference at " << i << " index." << endl;
			return 0;
		}
		elementsSum += arr1[i];
	}

	cout << "Arrays are identical. Sum: " << elementsSum << endl;

	return 0;
}