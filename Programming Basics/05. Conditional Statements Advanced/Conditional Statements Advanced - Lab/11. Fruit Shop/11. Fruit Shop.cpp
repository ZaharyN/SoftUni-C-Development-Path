#include <iostream>

using namespace std;

int main()
{
	string dayOfWeek, fruit;
	double quantity;
	double price = 0;
	bool hasError = false;

	cin >> fruit >> dayOfWeek >> quantity;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday"
		|| dayOfWeek == "Wednesday" || dayOfWeek == "Thursday"
		|| dayOfWeek == "Friday")
	{
		if (fruit == "banana")
		{
			price = 2.5;
		}
		else if (fruit == "apple")
		{
			price = 1.2;
		}
		else if (fruit == "orange")
		{
			price = 0.85;
		}
		else if (fruit == "grapefruit")
		{
			price = 1.45;
		}
		else if (fruit == "kiwi")
		{
			price = 2.7;
		}
		else if (fruit == "pineapple")
		{
			price = 5.5;
		}
		else if (fruit == "grapes")
		{
			price = 3.85;
		}
		else
		{
			hasError = true;
		}
	}
	else if (dayOfWeek == "Sunday" || dayOfWeek == "Saturday")
	{
		if (fruit == "banana")
		{
			price = 2.7;
		}
		else if (fruit == "apple")
		{
			price = 1.25;
		}
		else if (fruit == "orange")
		{
			price = 0.9;
		}
		else if (fruit == "grapefruit")
		{
			price = 1.6;
		}
		else if (fruit == "kiwi")
		{
			price = 3.0;
		}
		else if (fruit == "pineapple")
		{
			price = 5.6;
		}
		else if (fruit == "grapes")
		{
			price = 4.2;
		}
		else
		{
			hasError = true;
		}
	}
	else
	{
		hasError = true;
	}

	if (hasError)
	{
		cout << "error";
	}
	else
	{
		cout << quantity * price << endl;
	}

	return 0;
}