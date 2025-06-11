#include <iostream>
#include <string>
#include <sstream>
#include <queue>

using namespace std;

int main()
{
	string input;
	getline(cin, input);

	istringstream reader(input);

	int currNum;
	queue<int> evenNums;

	while (reader >> currNum)
	{
		if (currNum % 2 == 0)
		{
			evenNums.push(currNum);
		}
	}

	int counter = 0;
	while (!evenNums.empty())
	{
		if (counter++)
		{
			cout << ", " << evenNums.front();
		}
		else
		{
			cout << evenNums.front();
		}
		evenNums.pop();
	}

	return 0;
}