#include <iostream>
#include <string>

using namespace std;

int main()
{
	double currentNum, sum = 0;
	string input;
	cin >> input;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (input != "NoMoreMoney")
	{
		currentNum = stod(input);

		if (currentNum < 0)
		{
			cout << "Invalid operation!" << endl;
			break;
		}
		cout << "Increase: " << currentNum << endl;
		sum += currentNum;

		cin >> input;
	}

	cout << "Total: " << sum << endl;

	return 0;
}