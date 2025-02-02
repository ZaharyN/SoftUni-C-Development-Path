#include <iostream>

using namespace std;

int main()
{
	double dogFoodPackagePrice = 2.5;
	double catFoodPackagPrice = 4;

	double dogFoodQuantity, catFoodQuantity;
	cin >> dogFoodQuantity >> catFoodQuantity;

	double total = dogFoodQuantity * dogFoodPackagePrice + catFoodQuantity * catFoodPackagPrice;
	cout << total << " lv.";	
}