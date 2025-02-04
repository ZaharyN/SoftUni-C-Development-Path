#include <iostream>

using namespace std;

int main()
{
	double penPackagePrice = 5.8;
	double markerPackagePrice = 7.2;
	double cleaningAgentPricePerLitre = 1.20;

	int penPackages, markerPackages, cleaningAgentLitres, discountPercentage;

	cin >> penPackages >> markerPackages >> cleaningAgentLitres >> discountPercentage;

	double totalPrice = penPackages * penPackagePrice + markerPackages * markerPackagePrice
		+ cleaningAgentPricePerLitre * cleaningAgentLitres;

	cout << (totalPrice - totalPrice * ((double)discountPercentage / 100));
}