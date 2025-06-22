#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <cctype>

using namespace std;

int main()
{
	set<string> words;
	string input;
	getline(cin, input);
	transform(input.begin(), input.end(), input.begin(),
		[](char c) { return tolower(c); });

	istringstream reader(input);

	string curr;
	while (reader >> curr)
	{
		words.insert(curr);
	}

	bool isFirst = true;

	for (string word : words)
	{
		if (word.size() >= 5)
		{
			continue;
		}

		if (isFirst)
		{
			cout << word;
			isFirst = false;
		}
		else
		{
			cout << ", " << word;
		}
	}
	return 0;
}