#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int championshipDays, targetPoints, swimmersCount;
	double hotelRoomPricePerDay, participationFeePerSwimmer, pointsEarnedPerDay;

	cin >> championshipDays >> targetPoints >> swimmersCount;
	cin >> hotelRoomPricePerDay >> participationFeePerSwimmer;

	bool targetReached = false;
	double hotelFeeForAllSwimmersPerDay = 0;
	double totalPrice = 0;
	double totalPoints = 0;

	totalPrice += swimmersCount * participationFeePerSwimmer;

	double pointsEarnedPreviousDay = 0;

	for (int i = 0; i < championshipDays; i++)
	{
		cin >> pointsEarnedPerDay;

		totalPoints += (pointsEarnedPerDay + pointsEarnedPreviousDay * 0.05);

		hotelFeeForAllSwimmersPerDay = swimmersCount * hotelRoomPricePerDay;
		totalPrice += hotelFeeForAllSwimmersPerDay;

		pointsEarnedPreviousDay = pointsEarnedPerDay;
	}

	targetReached = totalPoints >= targetPoints;
	double moneyToPay = targetReached ? totalPrice -= totalPrice * 0.25 : totalPrice -= totalPrice * 0.1;

	cout << "Money left to pay: " << fixed << setprecision(2) << moneyToPay << " BGN." << endl;

	if (targetReached)
	{
		cout << "The championship was successful!";
	}
	else
	{
		cout << "The championship was not successful.";
	}

	return 0;
}