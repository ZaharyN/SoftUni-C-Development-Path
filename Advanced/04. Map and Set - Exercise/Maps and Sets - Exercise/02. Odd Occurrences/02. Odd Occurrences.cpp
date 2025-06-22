#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
	map<string, int> wordsCount;
	string input;
	getline(cin, input);
	transform(input.begin(), input.end(), input.begin(),
		[](char c) { return tolower(c); });
	istringstream reader(input);

	string currWord;
	while (reader >> currWord)
	{
		wordsCount[currWord]++;
	}

	istringstream printer(input);
	bool isFirst = true;

	while (printer >> currWord)
	{
		if (wordsCount[currWord] % 2 != 0)
		{
			if (isFirst)
			{
				cout << currWord;
				isFirst = false;
			}
			else
			{
				cout << ", " << currWord;
			}
			wordsCount.erase(currWord);
		}
	} 

	return 0;
}