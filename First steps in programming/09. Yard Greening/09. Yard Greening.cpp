#include <iostream>

using namespace std;

int main()
{
	double pricePerSquareMeter = 7.61;
	double discount = 0.18;

	double totalSquareMeters;
	cin >> totalSquareMeters;

	double totalPrice = pricePerSquareMeter * totalSquareMeters;
	double totalPriceWithDiscount = totalPrice - totalPrice * discount;

	cout << "The final price is: " << totalPriceWithDiscount << " lv." << endl;
	cout << "The discount is: " << totalPrice * discount << " lv.";

	return 0;
}
