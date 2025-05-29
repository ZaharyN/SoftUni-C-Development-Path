#include <iostream>
#include <list>
#include <sstream>
#include <string>

using namespace std;

list<int> ReadArray(istream& input)
{
	list<int> numbers;

	string buffer;
	getline(cin, buffer);

	istringstream istr(buffer);
	int currNum;

	while (istr >> currNum)
	{
		numbers.push_back(currNum);
	}
	
	return numbers;
}

void HandleRailcarAdding(list<int>& train, list<int>& result, char trainName, string& railcars)
{
	int railcarNum = train.back();
	train.pop_back();
	result.push_front(railcarNum);
	railcars += trainName;
}

int main()
{
	list<int> first = ReadArray(cin);
	list<int> second = ReadArray(cin);
	string railcars;
	list<int> merged;


	while (first.size() || second.size())
	{
		int a, b;
		
		if (first.size() && second.size())
		{
			a = first.back();
			b = second.back();

			if (a < b)
			{
				HandleRailcarAdding(first, merged, 'A', railcars);
			}
			else
			{
				HandleRailcarAdding(second, merged, 'B', railcars);
			}
		}
		else
		{
			if (first.size())
			{
				HandleRailcarAdding(first, merged, 'A', railcars);
			}
			else
			{
				HandleRailcarAdding(second, merged, 'B', railcars);
			}
		}
	}

	for (char c : railcars)
	{
		cout << c;
	}

	cout << endl;

	for (int i : merged)
	{
		cout << i << " ";
	}

	return 0;
}