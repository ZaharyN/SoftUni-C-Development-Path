#include <iostream>
#include <string>

using namespace std;

int main()
{
	string flowersType;
	int flowersCount, budget;
	double totalPrice;

	cin >> flowersType >> flowersCount >> budget;

	if (flowersType == "Roses")
	{
		totalPrice = flowersCount * 5;

		if (flowersCount > 80)
		{
			totalPrice -= totalPrice * 0.1;
		}
	}
	else if (flowersType == "Dahlias")
	{
		totalPrice = flowersCount * 3.8;

		if (flowersCount > 90)
		{
			totalPrice -= totalPrice * 0.15;
		}
	}
	else if (flowersType == "Tulips")
	{
		totalPrice = flowersCount * 2.8;

		if (flowersCount > 80)
		{
			totalPrice -= totalPrice * 0.15;
		}
	}
	else if (flowersType == "Narcissus")
	{
		totalPrice = flowersCount * 3;

		if (flowersCount < 120)
		{
			totalPrice += totalPrice * 0.15;
		}
	}
	else if (flowersType == "Gladiolus")
	{
		totalPrice = flowersCount * 2.5;

		if (flowersCount < 80)
		{
			totalPrice += totalPrice * 0.2;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= totalPrice)
	{
		cout << "Hey, you have a great garden with " << flowersCount << " " << flowersType << " and " << budget - totalPrice << " leva left.";
	}
	else
	{
		cout << "Not enough money, you need " << totalPrice - budget << " leva more.";
	}

	return 0;
}