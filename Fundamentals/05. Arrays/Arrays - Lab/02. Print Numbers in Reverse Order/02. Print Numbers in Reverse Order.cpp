#include <iostream>

using namespace std;

int main()
{
	const int maxSize = 99;
	int n;
	cin >> n;

	int arr[maxSize] = {};

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

	return 0;
}