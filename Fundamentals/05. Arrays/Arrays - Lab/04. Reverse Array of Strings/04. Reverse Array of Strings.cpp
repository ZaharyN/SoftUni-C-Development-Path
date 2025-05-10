#include <iostream>
#include <string>

using namespace std;

void ReverseArray(string arr[], int size)
{
	int iterations = size / 2;

	for (int i = 0; i < iterations; i++)
	{
		string temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

int main()
{
	const int maxSize = 99;
	string arr[maxSize] = {};

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	ReverseArray(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}