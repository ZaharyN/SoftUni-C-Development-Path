#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
	int maxNumber = INT_MIN,currentNum;
	string input;
	cin >> input;


	while (input != "Stop")
	{
		currentNum = stoi(input);

		if (currentNum > maxNumber)
		{
			maxNumber = currentNum;
		}

		cin >> input;
	}

	cout << maxNumber;

	return 0;
}