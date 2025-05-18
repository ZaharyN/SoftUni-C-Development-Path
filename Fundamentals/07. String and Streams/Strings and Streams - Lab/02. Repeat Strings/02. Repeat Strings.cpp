#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	ostringstream result;
	istringstream stream(line);
	string currentWord;

	while (stream >> currentWord)
	{
		for (int i = 0; i < currentWord.size(); i++)
		{
			result << currentWord;
		}
	}
	cout << result.str();

	return 0;
}