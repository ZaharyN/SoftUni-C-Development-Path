#include <iostream>
#include <string>

using namespace std;

string EncryptPassword(string& pass)
{
	for (int i = 0; i < pass.length(); i++)
	{
		pass[i] += 3;
	}

	return pass;
}

int main()
{
	string password;
	getline(cin, password);

	cout << EncryptPassword(password);

	return 0;
}