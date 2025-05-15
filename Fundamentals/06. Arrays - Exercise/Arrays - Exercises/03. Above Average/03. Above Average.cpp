#include <iostream>

using namespace std;

int main()
{
	const int maxSize = 99;
	int arr[maxSize] = {};

	int n;
	cin >> n;

	int average = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		average += arr[i];
	}

	average /= n;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= average)
		{
			cout << arr[i] << " ";
		}
	}

	return 0;
}