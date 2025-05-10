#include <iostream>

using namespace std;

void CalcualteEvenAndOddSum(int arr[], int size, int& evenSum, int& oddSum)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenSum += arr[i];
		}
		else
		{
			oddSum += arr[i];
		}
	}
}

int main()
{
	const int maxSize = 99;
	int arr[maxSize] = {};

	int n;
	cin >> n;

	int evenSum = 0;
	int oddSum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	CalcualteEvenAndOddSum(arr, n, evenSum, oddSum);

	cout << evenSum - oddSum << endl;

	return 0;
}