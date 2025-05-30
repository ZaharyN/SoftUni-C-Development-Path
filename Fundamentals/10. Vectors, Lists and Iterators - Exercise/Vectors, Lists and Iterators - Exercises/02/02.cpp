#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<char> brackets;
	string input;
	cin >> input;

	for (int i = 0; i < input.size(); i++)
	{
		brackets.push_back(input[i]);
	}

	int bracket0Count = 0;
	int bracket1Count = 0;
	int bracket2Count = 0;

	for (char c : brackets)
	{
		switch (c)
		{
			case '(':
				bracket0Count++;
				break;

			case '[':
				if (bracket0Count > 0)
				{
					cout << "invalid";
					return 0;
				}
				bracket1Count++;
				break;

			case '{':
				if (bracket0Count > 0 || bracket1Count > 0)
				{
					cout << "invalid";
					return 0;
				}
				bracket2Count++;
				break;

			case ')':
				if (bracket0Count <= 0)
				{
					cout << "invalid";
					return 0;
				}
				bracket0Count--;
				break;

			case ']':
				if (bracket1Count <= 0 || bracket0Count > 0)
				{
					cout << "invalid";
					return 0;
				}
				bracket1Count--;
				break;

			case '}':
				if (bracket2Count <= 0 || bracket1Count > 0 || bracket0Count > 0)
				{
					cout << "invalid";
					return 0;
				}
				bracket2Count--;
				break;
		}
	}

	cout << "valid" << endl;

	return 0;
}