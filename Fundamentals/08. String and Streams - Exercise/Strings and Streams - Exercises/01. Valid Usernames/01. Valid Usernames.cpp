#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool IsOnlyLettersAndNumbers(string name)
{
	for (int i = 0; i < name.length(); i++)
	{
		if (!isalnum(name[i])
			&& name[i] != '-'
			&& name[i] != '_')
		{
			return false;
		}
	}
	return true;
}

bool IsValidCharacterNumber(string name)
{
	return name.length() >= 3 && name.length() <= 16;
}

bool IsValid(string name)
{
	return IsValidCharacterNumber(name) 
		&& IsOnlyLettersAndNumbers(name);
}

int main()
{
	string line, currentName;
	getline(cin, line);

	int start = 0;
	int end;

	while ((end = line.find(", ", start)) != string::npos)
	{
		int endPos = end - start;
		currentName = line.substr(start, endPos);
		start = end + 2;

		if (IsValid(currentName))
		{
			cout << currentName << endl;
		}
	}

	currentName = line.substr(start);
	if (IsValid(currentName))
	{
		cout << currentName << endl;
	}


	return 0;
}