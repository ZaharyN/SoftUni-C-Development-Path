#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string seriesName;
	int episodeLength;
	double breakLength;

	getline(cin, seriesName);
	cin >> episodeLength >> breakLength;

	double lunchbreakTime = breakLength / 8;
	double restTime = breakLength / 4;

	double totalRestingTime = episodeLength + lunchbreakTime + restTime;

	if (breakLength >= totalRestingTime)
	{
		cout << "You have enough time to watch " << seriesName << " and left with " << ceil(breakLength - totalRestingTime) << " minutes free time.";
	}
	else
	{
		cout << "You don't have enough time to watch " << seriesName << ", you need " << ceil(totalRestingTime - breakLength) << " more minutes.";
	}
}