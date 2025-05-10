#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool IsValidCharactersCount(string pass)
{
	return pass.length() >= 6 && pass.length() <= 10;
}

bool IsOnlyLettersAndDigits(string pass)
{
	for (int i = 0; i < pass.length(); i++)
	{
		if (!isalnum(pass[i]))
		{
			return false;
		}
	}
	return true;
}

bool ContainsTwoDigits(string pass)
{
	int digits = 0;

	for (int i = 0; i < pass.length(); i++)
	{
		if (isdigit(pass[i]))
		{
			digits++;
		}
	}

	return digits >= 2;
}

int main()
{
	string password;
	getline(cin, password);

	bool isValidLength = IsValidCharactersCount(password);
	bool isOnlyLettersAndDigits = IsOnlyLettersAndDigits(password);
	bool containsTwoDigits = ContainsTwoDigits(password);

	if (isValidLength && isOnlyLettersAndDigits && containsTwoDigits)
	{
		cout << "Password is valid" << endl;
		return 0;
	}

	if (!isValidLength)
	{
		cout << "Password must be between 6 and 10 characters" << endl;
	}
	if (!isOnlyLettersAndDigits)
	{
		cout << "Password must consist only of letters and digits" << endl;
	}
	if (!containsTwoDigits)
	{
		cout << "Password must have at least 2 digits" << endl;
	}

	return 0;
}