#include <iostream>
#include <stack>
#include <climits>

using namespace std;

bool numberIsPresent(stack<int> myStack, int target)
{
	while (!myStack.empty())
	{
		int curr = myStack.top();
		if (curr == target)
		{
			return true;
		}
		myStack.pop();
	}
	return false;
}

int getSmallesNumber(stack<int> myStack)
{
	int smallest = INT_MAX;

	while (!myStack.empty())
	{
		int curr = myStack.top();
		if (curr < smallest)
		{
			smallest = curr;
		}

		myStack.pop();
	}

	return smallest;
}

int main()
{
	int n, s, x;
	cin >> n >> s >> x;

	stack<int> numbers;
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