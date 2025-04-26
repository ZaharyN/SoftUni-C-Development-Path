#include <iostream>
#include <string>

using namespace std;

int main()
{
	string month;
	int overnights;
	double studioPrice, appartmentPrice;
	double studioDiscount = 0; 
	double appartmentDiscount = 0;

	cin >> month >> overnights;

	if (month == "May" || month == "October")
	{
		studioPrice = 50;
		appartmentPrice = 65;

		if (overnights > 14)
		{
			studioDiscount = 0.3;
			appartmentDiscount = 0.1;
		}
		else if (overnights > 7)
		{
			studioDiscount = 0.05;
		}
	}
	else if (month == "June" || month == "September")
	{
		studioPrice = 75.2;
		appartmentPrice = 68.70;

		if (overnights > 14)
		{
			studioDiscount = 0.2;
			appartmentDiscount = 0.1;
		}
	}
	else if (month == "July" || month == "August")
	{
		studioPrice = 76;
		appartmentPrice = 77;

		if (overnights > 14)
		{
			appartmentDiscount = 0.1;
		}
	}

	double studioPriceRent = studioPrice * overnights;
	studioPriceRent -= studioPriceRent * studioDiscount;

	double appartmentPriceRent = appartmentPrice * overnights;
	appartmentPriceRent -= appartmentPriceRent * appartmentDiscount;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Apartment: " << appartmentPriceRent << " lv." << endl;
	cout << "Studio: " << studioPriceRent << " lv." << endl;

	return 0;
}