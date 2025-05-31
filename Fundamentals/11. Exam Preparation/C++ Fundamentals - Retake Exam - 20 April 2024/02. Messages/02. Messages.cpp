#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string input;
	getline(cin, input);

	int currNum;
	int sum = 0;

	for (char c : input)
	{
		if (isdigit(c))
		{
			sum += c - '0';
		}
	}

	if ((sum < 65 || sum > 90)
		&& (sum < 97 || sum > 122))
	{
		cout << sum;
	}
	else
	{
		cout << (char)sum;
	}

	return 0;
}