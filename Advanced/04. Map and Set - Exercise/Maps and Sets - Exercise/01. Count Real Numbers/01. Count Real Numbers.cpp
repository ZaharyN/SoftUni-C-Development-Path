#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main()
{
	map<double, int> numberOccurences;
	string input;
	getline(cin, input);
	istringstream reader(input);

	double currNum;
	while (reader >> currNum)
	{
		numberOccurences[currNum]++;
	}

	for (const pair<double, int>& n : numberOccurences)
	{
		cout << n.first << " -> " << n.second << endl;
	}

	return 0;
}
