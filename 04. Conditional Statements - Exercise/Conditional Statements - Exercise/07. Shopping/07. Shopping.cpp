#include <iostream>

using namespace std;

int main()
{
	double videoCardPrice = 250.0;
	double processorsPrice, memoryPrice, budget;
	int videoCardsCount, processorsCount, memoryCount;

	cin >> budget >> videoCardsCount >> processorsCount >> memoryCount;

	processorsPrice = videoCardPrice * videoCardsCount * 0.35;
	memoryPrice = videoCardPrice * videoCardsCount * 0.1;

	double totalSum = videoCardPrice * videoCardsCount + processorsPrice * processorsCount + memoryPrice * memoryCount;

	if (videoCardsCount > processorsCount)
	{
		totalSum -= totalSum * 0.15;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= totalSum)
	{
		cout << "You have " << budget - totalSum << " leva left!";
	}
	else
	{
		cout << "Not enough money! You need " << totalSum - budget << " leva more!";
	}

	return 0;
}