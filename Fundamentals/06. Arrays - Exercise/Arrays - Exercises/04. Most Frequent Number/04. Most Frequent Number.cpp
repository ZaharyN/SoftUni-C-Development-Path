#include <iostream>

using namespace std;

int main()
{
	const int maxSize = 99;
	int arr[maxSize] = {};
	int numberRepetitions[10] = {};

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		numberRepetitions[arr[i]]++;
	}

	int maxRepetitions = 0;

	for (int i = 0; i < 10; i++)
	{
		if (numberRepetitions[i] >= maxRepetitions)
		{
			maxRepetitions = numberRepetitions[i];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (numberRepetitions[i] == maxRepetitions)
		{
			cout << i << " ";
		}
	}

	return 0;
}