#include <iostream>
#include <string>

using namespace std;

int main()
{
	double budget, moneySpent;
	string season, destination, holidayType;

	cin >> budget >> season;

	if (budget <= 100)
	{
		destination = "Bulgaria";

		if (season == "summer")
		{
			holidayType = "Camp";
			moneySpent = 0.3 * budget;
		}
		else if (season == "winter")
		{
			holidayType = "Hotel";
			moneySpent = 0.7 * budget;
		}
	}
	else if (budget <= 1000)
	{
		destination = "Balkans";

		if (season == "summer")
		{
			holidayType = "Camp";
			moneySpent = 0.4 * budget;
		}
		else if (season == "winter")
		{
			holidayType = "Hotel";
			moneySpent = 0.8 * budget;
		}
	}
	else if (budget > 1000)
	{
		destination = "Europe";
		holidayType = "Hotel";
		moneySpent = 0.9 * budget;
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	
	cout << "Somewhere in " << destination << endl;
	cout << holidayType << " - " << moneySpent << endl;
	
	return 0;
}