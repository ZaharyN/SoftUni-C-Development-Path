#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double CalculateProductPrice(string product, int quantity)
{
	double singlePrice;

	if (product == "coffee")
	{
		singlePrice = 1.5;
	}
	else if (product == "water")
	{
		singlePrice = 1.0;
	}
	else if (product == "coke")
	{
		singlePrice = 1.4;
	}
	else if (product == "snacks")
	{
		singlePrice = 2.0;
	}
	
	return singlePrice * quantity;
}

int main()
{
	string product;
	int quantity;
	cin >> product >> quantity;

	cout << fixed << setprecision(2) << CalculateProductPrice(product, quantity);

	return 0;
}