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

	int lastElement = arr[0];
	int longestSequenceElement = lastElement;
	int currentSequenceCount = 1;
	int longestSequenceCount = 1;

	for (int i = 1; i < n; i++)
	{
		int currentElement = arr[i];

		if (currentElement == lastElement)
		{
			currentSequenceCount++;

			if (currentSequenceCount >= longestSequenceCount)
			{
				longestSequenceCount = currentSequenceCount;
				longestSequenceElement = currentElement;
			}
			continue;
		}

		currentSequenceCount = 1;
		lastElement = currentElement;
		if (longestSequenceCount <= 1) longestSequenceElement = currentElement;
	}

	for (int i = 0; i < longestSequenceCount; i++)
	{
		cout << longestSequenceElement << " ";
	}

	return 0;
}
