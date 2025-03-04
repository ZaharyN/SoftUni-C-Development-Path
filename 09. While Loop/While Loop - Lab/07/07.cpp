#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
	int minNumber = INT_MAX;
	int currentNumber;
	string input;

	while (cin >> input && input != "Stop")
	{
		currentNumber = stoi(input);

		if (currentNumber < minNumber)
		{
			minNumber = currentNumber;
		}
	}

	cout << minNumber;

	return 0;
}