#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
#include <cctype>
#include <cmath>

using namespace std;

bool isPerfectSquare(int n)
{
	if (n < 0) return false;
	int root = static_cast<int>(sqrt(n));
	return root * root == n;
}

int main()
{
	map<int, unsigned> squares;
	string input;
	getline(cin, input);

	istringstream reader(input);
	int currNum;

	while (reader >> currNum)
	{
		if (isPerfectSquare(currNum))
		{
			squares[currNum]++;
		}
	}

	for (map<int, unsigned>::reverse_iterator it = squares.rbegin(); it != squares.rend(); it++)
	{
		for (int i = 0; i < it->second; i++)
		{
			cout << it->first << " ";
		}
	}

	return 0;
}