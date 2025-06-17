#include <iostream>
#include <queue>

using namespace std;

bool canCompleteCircle(queue<int> fuel, queue<int> distances)
{
	int totalFuel = 0;

	while (!distances.empty() && !fuel.empty())
	{
		int fuelGiven = fuel.front();
		int distanceToNext = distances.front();

		totalFuel += fuelGiven;

		if (totalFuel < distanceToNext) return false;

		totalFuel -= distanceToNext;
		fuel.pop();
		distances.pop();
	}

	return true;
}

int main()
{
	queue<int>fuel;
	queue<int>distances;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int petrol, distance;
		cin >> petrol >> distance;

		fuel.push(petrol);
		distances.push(distance);
	}

	int validIndex = 0;

	for (int i = 0; i < n; i++)
	{
		if (canCompleteCircle(fuel, distances))
		{
			validIndex = i;
			break;
		}

		fuel.push(fuel.front());
		distances.push(distances.front());

		fuel.pop();
		distances.pop();
	}
	
	cout << validIndex << endl;

	return 0;
}