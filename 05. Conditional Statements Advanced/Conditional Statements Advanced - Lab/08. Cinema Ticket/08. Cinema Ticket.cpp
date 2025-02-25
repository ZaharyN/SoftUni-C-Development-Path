#include <iostream>

using namespace std;

int main()
{
	string dayOfWeek;
	cin >> dayOfWeek;

	int ticketPrice;

	if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Friday")
	{
		ticketPrice = 12;
	}
	else if (dayOfWeek == "Wednesday" || dayOfWeek == "Thursday")
	{
		ticketPrice = 14;
	}
	else if (dayOfWeek == "Saturday" || dayOfWeek == "Sunday")
	{
		ticketPrice = 16;
	}

	cout << ticketPrice;
}