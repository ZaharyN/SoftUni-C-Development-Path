#include <iostream>
#include <string>

using namespace std;

bool IsVowel(char ch)
{
	switch (ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			return true;
		default:
			return false;
	}
}

int GetVowels(string word)
{
	int vowelsCount = 0;
	for (int i = 0; i < word.length(); i++)
	{
		if (IsVowel(word[i]))
		{
			vowelsCount++;
		}
	}

	return vowelsCount;
}


int main()
{
	string word;
	getline(cin, word);

	cout << GetVowels(word) << endl;

	return 0;
}