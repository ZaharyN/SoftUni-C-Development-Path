#include <iostream>
#include<string>
#include<sstream>

using namespace std;

string Reversed(string word)
{
	string reversed;
	for (int i = word.size(); i >= 0; i--)
	{
		reversed += word[i];
	}

	return reversed;
}

int main()
{
	string word;
	getline(cin, word);

	while (word != "end")
	{
		cout << word << " = " << Reversed(word) << endl;

		getline(cin, word);
	}

	return 0;
}