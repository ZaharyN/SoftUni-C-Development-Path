#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string input;
	getline(cin, input);
	stack<char> symbols;
	char currentChar;

	for (char c : input)
	{
		symbols.push(c);
	}

	while (!symbols.empty())
	{
		cout << symbols.top();
		symbols.pop();
	}

	return 0;
}