#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string input;
	getline(cin, input);

	int num;
	char c;
	istringstream reader(input);

	stack<int> numbers;
	stack<char> operations;

	reader >> num;
	numbers.push(num);

	while (reader >> c)
	{
		operations.push(c);
		reader >> num;
		numbers.push(num);
	}

	int sum = 0;

	while (!operations.empty())
	{
		int currNum = numbers.top();
		numbers.pop();

		char currentOperation = operations.top();
		operations.pop();

		switch (currentOperation)
		{
			case '+':
				sum += currNum;
				break;

			case '-':
				sum += -currNum;
				break;
		}
	}

	sum += numbers.top();
	cout << sum;

	return 0;
}