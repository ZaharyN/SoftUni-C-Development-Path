#include <iostream>
#include <string>

using namespace std;

int main()
{
	string equation;
	cin >> equation;

	int openingBracketsCount = 0;
	int closingBracketsCount = 0;

	for (int i = 0; i < equation.length(); i++)
	{
		if (equation[i] == '(') openingBracketsCount++;
		if (equation[i] == ')') closingBracketsCount++;
		
	}

	string result = openingBracketsCount == closingBracketsCount ? "correct" : "incorrect";
	cout << result << endl;

	return 0;
}