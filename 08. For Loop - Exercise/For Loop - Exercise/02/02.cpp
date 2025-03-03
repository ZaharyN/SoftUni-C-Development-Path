#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int n, currentNumber;
	cin >> n;

	int sum = 0;
	int maxElement = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		cin >> currentNumber;
		
		if (currentNumber > maxElement)
		{
			maxElement = currentNumber;
		}
		sum += currentNumber;
	}

	if (sum - maxElement == maxElement)
	{
		cout << "Yes" << endl;
		cout << "Sum = " << maxElement;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << abs(sum - maxElement - maxElement);
	}

	return 0;
}