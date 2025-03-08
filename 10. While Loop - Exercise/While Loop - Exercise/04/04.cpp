#include <iostream>
#include <string>

using namespace std;

int main()
{
	int stepsPerDayGoal = 10000;
	int stepsSum = 0, currentSteps;
	string input;

	while (stepsSum < stepsPerDayGoal)
	{
		getline(cin, input);

		if (input == "Going home")
		{
			cin >> currentSteps;
			stepsSum += currentSteps;
			break;
		}
		currentSteps = stoi(input);
		stepsSum += currentSteps;
	}

	if (stepsSum >= stepsPerDayGoal)
	{
		cout << "Goal reached! Good job!" << endl;
	}
	else
	{
		cout << stepsPerDayGoal - stepsSum << " more steps to reach goal." << endl;
	}

	return 0;
}