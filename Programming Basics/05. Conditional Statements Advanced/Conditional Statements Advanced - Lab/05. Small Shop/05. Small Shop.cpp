#include <iostream>
#include <string>

using namespace std;

int main()
{
	string product, city;
	double quantity, price;

	cin >> product >> city >> quantity;

	if (product == "coffee")
	{
		if (city == "Sofia")
		{
			price = 0.5;
		}
		else if (city == "Plovdiv")
		{
			price = 0.4;
		}
		else if (city == "Varna")
		{
			price = 0.45;
		}
	}
	else if (product == "water")
	{
		if (city == "Sofia")
		{
			price = 0.8;
		}
		else if (city == "Plovdiv")
		{
			price = 0.7;
		}
		else if (city == "Varna")
		{
			price = 0.7;
		}
	}
	else if (product == "beer")
	{
		if (city == "Sofia")
		{
			price = 1.2;
		}
		else if (city == "Plovdiv")
		{
			price = 1.15;
		}
		else if (city == "Varna")
		{
			price = 1.1;
		}
	}
	else if (product == "sweets")
	{
		if (city == "Sofia")
		{
			price = 1.45;
		}
		else if (city == "Plovdiv")
		{
			price = 1.3;
		}
		else if (city == "Varna")
		{
			price = 1.35;
		}
	}
	else if (product == "peanuts")
	{
		if (city == "Sofia")
		{
			price = 1.6;
		}
		else if (city == "Plovdiv")
		{
			price = 1.5;
		}
		else if (city == "Varna")
		{
			price = 1.55;
		}
	}

	cout << quantity * price;

	return 0;
}