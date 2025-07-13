#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	map<string, double> cityPrices;
	int numberOfCities;
	cin >> numberOfCities;
	cin.ignore();

	while (true)
	{
		double pricePerProduct;
		double quantity;
		string cityName;
		getline(cin, cityName);
		cin >> pricePerProduct >> quantity;
		cin.ignore();

		if (cityPrices.find(cityName) != cityPrices.end())
		{
			cityPrices[cityName] += pricePerProduct * quantity;
		}
		else
		{
			cityPrices[cityName] = pricePerProduct * quantity;
			numberOfCities--;
		}
		if (numberOfCities <= 0)
		{
			break;
		}
	}

	for (pair<string, double> pair : cityPrices)
	{
		cout << pair.first << " " << pair.second << endl;
	}

	return 0;
}