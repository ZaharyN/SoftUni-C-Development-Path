#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string sentence;
	getline(cin, sentence);

	bool shouldBeUpper = true;

	for (int i = 0; i < sentence.length(); i++)
	{
		char ch = sentence[i];

		if (isalpha(ch) && shouldBeUpper)
		{
			sentence[i] = toupper(sentence[i]);
			shouldBeUpper = false;
		}

		if (!isalpha(ch))
		{
			shouldBeUpper = true;
		}
	}

	cout << sentence << endl;

	return 0; 
}