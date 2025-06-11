#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string input;
	getline(cin, input);
	istringstream reader(input);
	int num;

	stack<int> numbers;

	while (reader >> num)
	{
		numbers.push(num);
	}

	getline(cin, input);

	while (input != "end")
	{
		istringstream commandReader(input);
		string command;
		commandReader >> command;
		int par1;
		int par2;

		if (command == "add")
		{
			commandReader >> par1;
			commandReader >> par2;

			numbers.push(par1);
			numbers.push(par2);
		}
		else if (command == "remove")
		{
			commandReader >> par1;

			if (par1 > numbers.size())
			{
				getline(cin, input);
				continue;
			}

			for (int i = 0; i < par1; i++)
			{
				numbers.pop();
			}
		}

		getline(cin, input);
	}

	int sum = 0;

	while (!numbers.empty())
	{
		sum += numbers.top();
		numbers.pop();
	}

	cout << sum << endl;

	return 0;
}