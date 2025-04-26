#include <iostream>
#include <string>

using namespace std;

int main()
{
	int daysSpending = 0, totalDays = 0;
	double moneyNeeded, availableMoney, operationMoney;
	string command;

	cin >> moneyNeeded >> availableMoney;

	while (availableMoney < moneyNeeded)
	{
		cin >> command;
		cin >> operationMoney;
		totalDays++;

		if (command == "spend")
		{
			availableMoney -= operationMoney;
			daysSpending++;

			if (daysSpending >= 5)
			{
				cout << "You can't save the money." << endl;
				cout << totalDays;
				return 0;
			}

			if (availableMoney < 0) availableMoney = 0;
		}
		if (command == "save")
		{
			daysSpending = 0;
			availableMoney += operationMoney;
		}
	}

	cout << "You saved the money for " << totalDays << " days." << endl;

	return 0;
}