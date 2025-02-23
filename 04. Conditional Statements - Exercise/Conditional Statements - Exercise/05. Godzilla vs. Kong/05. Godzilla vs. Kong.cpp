#include <iostream>

using namespace std;

int main()
{
	double movieBudget, clothingPricePerStatist;
	int statistsCount;

	cin >> movieBudget >> statistsCount >> clothingPricePerStatist;
	
	if (statistsCount > 150)
	{
		clothingPricePerStatist -= clothingPricePerStatist * 0.1;
	}

	double decorPrice = movieBudget * 0.1;
	double moviePrice = decorPrice + statistsCount * clothingPricePerStatist;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (movieBudget >= moviePrice)
	{
		cout << "Action!" << endl;
		cout << "Wingard starts filming with " << movieBudget - moviePrice << " leva left.";
	}
	else
	{
		cout << "Not enough money!" << endl;
		cout << "Wingard needs " << moviePrice - movieBudget << " leva more.";
	}

	return 0;
}