#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <climits>

using namespace std;

int getSmallestElement(stack<int> myStack)
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

int getBiggestElement(stack<int> myStack)
{
	int biggest = INT_MIN;

	while (!myStack.empty())
	{
		int curr = myStack.top();
		if (curr > biggest)
		{
			biggest = curr;
		}
		myStack.pop();
	}

	return biggest;
}

int main()
{
	int queries;
	cin >> queries;
	cin.ignore();

	stack<int> numbers;

	while (queries--)
	{
		string input;
		getline(cin, input);
		istringstream reader(input);

		int command;
		reader >> command;

		switch (command)
		{
			case 1:
				int el;
				reader >> el;
				numbers.push(el);
				break;

			case 2:
				if (numbers.empty()) continue;

				numbers.pop();
				break;

			case 3:
				if (numbers.empty()) continue;
				cout << getBiggestElement(numbers) << endl;
				break;

			case 4:
				if (numbers.empty()) continue;
				cout << getSmallestElement(numbers) << endl;
				break;
		}
	}

	bool isFirst = true;
	while (!numbers.empty())
	{
		if (isFirst)
		{
			cout << numbers.top();
			numbers.pop();
			isFirst = false;
			continue;
		}
		cout << ", " << numbers.top();
		numbers.pop();
	}

	return 0;
}