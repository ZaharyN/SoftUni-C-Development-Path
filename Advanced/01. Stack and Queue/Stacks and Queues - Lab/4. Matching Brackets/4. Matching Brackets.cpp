#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	string input;
	getline(cin, input);

	stack<int> indexes;

	for (int i = 0; i < input.length(); i++)
	{
		switch (input[i])
		{
			case '(':
				indexes.push(i);
				break;

			case ')':
				int beginningIndex = indexes.top();
				indexes.pop();
				cout << input.substr(beginningIndex, i - beginningIndex + 1) << endl;
				break;
		}
	}

	return 0;
}