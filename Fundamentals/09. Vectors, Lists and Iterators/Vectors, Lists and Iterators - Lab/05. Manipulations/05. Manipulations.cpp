#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string input;
	vector<int> numbers;
	getline(cin, input);

	istringstream reader(input);
	int currNum;

	while (reader >> currNum)
	{
		numbers.push_back(currNum);
	}

	getline(cin, input);
	while (input != "end")
	{
		istringstream istr(input);
		string command;
		int par1;
		istr >> command;
		istr >> par1;

		if (command == "Add")
		{
			numbers.push_back(par1);
		}
		else if (command == "Remove")
		{
			vector<int>::iterator index = find(numbers.begin(), numbers.end(), par1);
			if (index != numbers.end())
			{
				numbers.erase(index);
			}
		}
		else if (command == "RemoveAt")
		{
			numbers.erase(numbers.begin() + par1);
		}
		else if (command == "Insert")
		{
			int par2;
			istr >> par2;

			numbers.insert(numbers.begin() + par2, par1);
		}

		getline(cin, input);
	}

	for (int n : numbers)
	{
		cout << n << " ";
	}

	return 0;
}