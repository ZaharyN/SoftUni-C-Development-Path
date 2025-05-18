#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	ostringstream digits, letters, chars;
	istringstream reader(line);
	char currentChar;

	while (reader >> currentChar)
	{
		if (isalpha(currentChar))
		{
			letters << currentChar;
		}
		else if (isdigit(currentChar))
		{
			digits << currentChar;
		}
		else
		{
			chars << currentChar;
		}
	}

	cout << digits.str() << endl 
		 << letters.str() << endl 
		 << chars.str() << endl;

	return 0;
}