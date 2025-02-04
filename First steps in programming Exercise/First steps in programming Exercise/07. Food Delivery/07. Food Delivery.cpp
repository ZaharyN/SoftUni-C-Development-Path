#include <iostream>

using namespace std;

int main()
{
	double chickenMenuPrice = 10.35;
	double fishMenuPrice = 12.40;
	double vegetarianMenuPrice = 8.15;

	double desertPricePercentage = 0.2;
	double deliveryPrice = 2.5;

	int chickenMenus, fishMenus, vegetarianMenus;
	cin >> chickenMenus >> fishMenus >> vegetarianMenus;

	double totalMenusPrice = chickenMenus * chickenMenuPrice
		+ fishMenus * fishMenuPrice
		+ vegetarianMenus * vegetarianMenuPrice;

	double totalPrice = totalMenusPrice + totalMenusPrice * desertPricePercentage + deliveryPrice;

	cout << totalPrice;
}