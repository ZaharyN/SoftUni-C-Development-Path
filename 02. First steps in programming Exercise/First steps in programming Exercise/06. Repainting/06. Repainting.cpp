#include <iostream>

using namespace std;

int main()
{
	double nylonPricePerSquareMeter = 1.5;
	double paintPricePerLitre = 14.50;
	double thinnerPricePerLitre = 5;

	double additionalPaintLitresPercentage = 0.1;
	double additionNylonSquareMeters = 2;
	double bagPrice = 0.4;
	double workerPercentagePerHour = 0.3;

	double nylonSquareMeters, paintLitres, thinnerLitres;
	int workingHours;

	cin >> nylonSquareMeters >> paintLitres >> thinnerLitres >> workingHours;

	double materialPrice = (nylonSquareMeters + additionNylonSquareMeters) * nylonPricePerSquareMeter
		+ (paintLitres + paintLitres * additionalPaintLitresPercentage) * paintPricePerLitre
		+ thinnerLitres * thinnerPricePerLitre
		+ bagPrice;

	double pricePerHour = workerPercentagePerHour * materialPrice;
	double totalPrice = pricePerHour * workingHours + materialPrice;

	cout << totalPrice;

	return 0;
}