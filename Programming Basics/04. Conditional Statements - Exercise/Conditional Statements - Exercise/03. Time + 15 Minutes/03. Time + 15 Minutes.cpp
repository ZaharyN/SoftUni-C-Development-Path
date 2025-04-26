#include <iostream>

using namespace std;

int main()
{
	int hours, minutes;
	cin >> hours >> minutes;

	minutes += 15;

	if (minutes > 59)
	{
		hours++;
		minutes = minutes - 60;
	}
	if (hours > 23)
	{
		hours -= 24;
	}

	if (minutes < 10)
	{
		cout << hours << ":0" << minutes;
	}
	else
	{
		cout << hours << ":" << minutes;
	}

	return 0;
}