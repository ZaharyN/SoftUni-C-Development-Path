#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double recordSeconds, totalMeters, secondsPerMeter;
	cin >> recordSeconds >> totalMeters >> secondsPerMeter;


	double waterResistanceCount = floor(totalMeters / 15);
	double waterResistanceDelay = waterResistanceCount * 12.5;

	double IvanTime = totalMeters * secondsPerMeter + waterResistanceDelay;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (IvanTime < recordSeconds)
	{
		cout << "Yes, he succeeded! The new world record is " << IvanTime << " seconds.";
	}
	else
	{
		cout << "No, he failed! He was " << IvanTime - recordSeconds << " seconds slower.";
	}

	return 0;
}