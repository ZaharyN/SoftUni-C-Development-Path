#include <iostream>
#include <queue>
#include <climits>

using namespace std;

bool numberIsPresent(queue<int> myQueue, int target)
{
	while (!myQueue.empty())
	{
		int curr = myQueue.front();
		if (curr == target)
		{
			return true;
		}
		myQueue.pop();
	}
	return false;
}

int getSmallesNumber(queue<int> myQueue)
{
	int smallest = INT_MAX;

	while (!myQueue.empty())
	{
		int curr = myQueue.front();
		if (curr < smallest)
		{
			smallest = curr;
		}

		myQueue.pop();
	}

	return smallest;
}

int main()
{
	int n, s, x;
	cin >> n >> s >> x;

	queue<int> numbers;
	int num;
	while (n--)
	{
		cin >> num;
		numbers.push(num);
	}

	while (s--)
	{
		numbers.pop();
	}

	if (numbers.empty())
	{
		cout << 0 << endl;
		return 0;
	}

	if (numberIsPresent(numbers, x))
	{
		cout << "true" << endl;
		return 0;
	}
	cout << getSmallesNumber(numbers) << endl;

	return 0;
}