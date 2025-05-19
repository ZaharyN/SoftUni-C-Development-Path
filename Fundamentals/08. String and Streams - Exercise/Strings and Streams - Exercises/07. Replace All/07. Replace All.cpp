#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence, findString, replaceString;
	getline(cin, sentence);
	getline(cin, findString);
	getline(cin, replaceString);

	int start = sentence.find(findString);

	while (start != string::npos)
	{
		sentence.replace(start, findString.length(), replaceString);

		start = sentence.find(findString);
	}

	cout << sentence << endl;

	return 0;
}