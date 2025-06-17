#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	string input;
	cin >> input;

	stack<char> parenthesis;
	bool isBalanced = true;
	char lastChar;

	for (int i = 0; i < input.size(); i++)
	{
		char currentChar = input[i];
		switch (currentChar)
		{
			case '{':
			case '[':
			case '(':
				parenthesis.push(currentChar);
				break;
			case ')':
				if (parenthesis.empty())
				{
					isBalanced = false;
					break;
				}
				lastChar = parenthesis.top();
				if (lastChar != '(')
				{
					isBalanced = false;
					break;
				}
				parenthesis.pop();
				break;

			case ']':
				if (parenthesis.empty())
				{
					isBalanced = false;
					break;
				}
				lastChar = parenthesis.top();
				if (lastChar != '[')
				{
					isBalanced = false;
					break;
				}
				parenthesis.pop();
				break;

			case '}':
				if (parenthesis.empty())
				{
					isBalanced = false;
					break;
				}
				lastChar = parenthesis.top();
				if (lastChar != '{')
				{
					isBalanced = false;
					break;
				}
				parenthesis.pop();
				break;
		}
		if (!isBalanced) break;
	}

	if (isBalanced)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}

// ()()(()){[()([)]}