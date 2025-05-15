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

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i] * arr[j] << " ";
		}
	}

	return 0;
}