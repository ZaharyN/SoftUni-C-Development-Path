#include <iostream>

using namespace std;

int main()
{
	double shoesPercentageFromYearlyCoursesPrice = 0.4;
	double outfitPercentageFromShoesPrice = 0.2;
	double ballPercentageFromOutfitPrice = 0.25;
	double accessoariesPercentageFromBallPrice = 0.2;

	int coursesPricePerYear;
	cin >> coursesPricePerYear;

	double shoesPrice = coursesPricePerYear - coursesPricePerYear * shoesPercentageFromYearlyCoursesPrice;
	double outfitPrice = shoesPrice - shoesPrice * outfitPercentageFromShoesPrice;
	double ballPrice = outfitPrice * ballPercentageFromOutfitPrice;
	double accessoariesPrice = ballPrice * accessoariesPercentageFromBallPrice;

	double totalPrice = coursesPricePerYear + shoesPrice + outfitPrice + ballPrice + accessoariesPrice;

	cout << totalPrice;

	return 0;
}