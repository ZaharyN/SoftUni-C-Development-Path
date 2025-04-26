#include <iostream>

using namespace std;

int main()
{
	string destination;
	double destinationBudget, inputBudget;
	double currentBudget = 0;

	while (cin >> destination && destination != "End")
	{
		cin >> destinationBudget;
		currentBudget = 0;

		while (currentBudget < destinationBudget)
		{
			cin >> inputBudget;
			currentBudget += inputBudget;
		}

		cout << "Going to " << destination << "!" << endl;
	}

	return 0;
}