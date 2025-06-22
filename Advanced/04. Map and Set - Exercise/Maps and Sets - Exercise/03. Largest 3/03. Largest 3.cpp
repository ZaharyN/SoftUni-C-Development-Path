#include <iostream>
#include <set>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	set<double> numbers;
	string input;
	getline(cin, input);

	istringstream reader(input);

	double currNum;
	while (reader >> currNum)
	{
		numbers.insert(currNum);
	}

	double counter = 0;
	for (set<double>::reverse_iterator it = numbers.rbegin(); it != numbers.rend() && counter < 3; it++, counter++)
	{
		cout << *it << " ";
	}
}
