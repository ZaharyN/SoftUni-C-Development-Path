#include <iostream>
#include <string>
#include <list>
#include <climits>

using namespace std;

int CalculateTimeInMinutes(string& time)
{
	int result;

	int hours = (time[0] - '0') * 10 + (time[1] - '0');
	int minutes = ((time[2]) - '0') * 10 + (time[3] - '0');

	return hours * 60 + minutes;
}


int main()
{
	list<string> departureTimes;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string currentDeparture;
		cin >> currentDeparture;
		departureTimes.push_back(currentDeparture);
	}

	string busDeparture;
	cin >> busDeparture;
	int busDepartureTime = CalculateTimeInMinutes(busDeparture);
	int minTimeDifference = INT_MAX;
	int trainNumber = 1;
	int bestTrain;

	for (list<string>::iterator it = departureTimes.begin(); it != departureTimes.end(); it++)
	{
		int currentTrainArrival = CalculateTimeInMinutes(*it);
		int diff;

		if (busDepartureTime >= currentTrainArrival)
		{
			diff = busDepartureTime - currentTrainArrival;
		}
		else
		{
			diff = busDepartureTime + 24 * 60 - currentTrainArrival;
		}
		if (diff < minTimeDifference)
		{
			minTimeDifference = diff;
			bestTrain = trainNumber;
		}
		trainNumber++;
	}

	cout << bestTrain;

	return 0;
}
