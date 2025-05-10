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

	int evenSum = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenSum += arr[i];
		}
	}

	cout << evenSum << endl;

	return 0;
}