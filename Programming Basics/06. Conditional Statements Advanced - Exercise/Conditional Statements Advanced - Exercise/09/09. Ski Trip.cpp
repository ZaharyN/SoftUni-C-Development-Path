#include <iostream>
#include <string>

using namespace std;

int main()
{
	int vacationLength;
	string hotelroomType, rating;
	double totalPrice, roomPrice, discount;

	cin >> vacationLength; 
	cin.ignore();

	getline(cin, hotelroomType);
	getline(cin, rating);

	int vacationDays = vacationLength - 1;

	if (hotelroomType == "room for one person")
	{
		roomPrice = 18;
		discount = 0;
	}
	else if (hotelroomType == "apartment")
	{
		roomPrice = 25;

		if (vacationDays < 10)
		{
			discount = 0.3;
		}
		else if (vacationDays <= 15)
		{
			discount = 0.35;
		}
		else
		{
			discount = 0.5;
		}
	}
	else if (hotelroomType == "president apartment")
	{
		roomPrice = 35;

		if (vacationDays < 10)
		{
			discount = 0;
		}
		else if (vacationDays <= 15)
		{
			discount = 0.15;
		}
		else
		{
			discount = 0.2;
		}
	}

	totalPrice = roomPrice * vacationDays;
	totalPrice -= totalPrice * discount;

	if (rating == "positive")
	{
		totalPrice += totalPrice * 0.25;
	}
	else
	{
		totalPrice -= totalPrice * 0.1;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << totalPrice;

	return 0;
}