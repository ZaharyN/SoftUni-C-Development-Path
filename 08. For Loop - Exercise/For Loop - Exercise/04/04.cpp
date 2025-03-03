#include <iostream>

using namespace std;

int main()
{
	int age, toyPrice;
	double washingMachinePrice;
	double moneyCollected = 0;
	int toyCount = 0;

	cin >> age >> washingMachinePrice >> toyPrice;

	for (int i = 1; i <= age; i++)
	{
		if (i % 2 == 0)
		{
			moneyCollected += i / 2 * 10;
			moneyCollected--;
		}
		else
		{
			toyCount++;
		}
	}

	moneyCollected += toyCount * toyPrice;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (moneyCollected >= washingMachinePrice)
	{
		cout << "Yes! " << moneyCollected - washingMachinePrice;
	}
	else
	{
		cout << "No! " << washingMachinePrice - moneyCollected;
	}

	return 0;
}