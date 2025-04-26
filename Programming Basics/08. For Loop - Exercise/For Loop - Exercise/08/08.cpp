#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int tournamentsCount, startingPoints;
	string tournamentResult;

	cin >> tournamentsCount >> startingPoints;

	int pointsEarned = 0; int tournamentsWon = 0;

	for (int i = 0; i < tournamentsCount; i++)
	{
		cin >> tournamentResult;

		if (tournamentResult == "W")
		{
			pointsEarned += 2000;
			tournamentsWon++;
		}
		else if (tournamentResult == "F")
		{
			pointsEarned += 1200;
		}
		else if (tournamentResult == "SF")
		{
			pointsEarned += 720;
		}
	}

	cout << "Final points: " << pointsEarned + startingPoints << endl;
	cout << "Average points: " << floor((double)pointsEarned / tournamentsCount) << endl;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << (double)tournamentsWon / tournamentsCount * 100 << "%" << endl;

	return 0;
}