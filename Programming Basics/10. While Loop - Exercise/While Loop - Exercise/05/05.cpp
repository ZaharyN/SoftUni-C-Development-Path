#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int totalCoins = 0;
	double change;
	cin >> change;
	int cents = round(change * 100);

	while (cents > 0)
	{
		if (cents - 200 >= 0)
		{
			cents -= 200;
		}
		else if (cents - 100 >= 0)
		{
			cents -= 100;
		}
		else if (cents - 50 >= 0)
		{
			cents -= 50;
		}
		else if (cents - 20 >= 0)
		{
			cents -= 20;
		}
		else if (cents - 10 >= 0)
		{
			cents -= 10;
		}
		else if (cents - 5 >= 0)
		{
			cents -= 5;
		}
		else if (cents - 2 >= 0)
		{
			cents -= 2;
		}
		else if (cents - 1 >= 0)
		{
			cents -= 1;
		}

		totalCoins++;
	}

	cout << totalCoins;

	return 0;
}