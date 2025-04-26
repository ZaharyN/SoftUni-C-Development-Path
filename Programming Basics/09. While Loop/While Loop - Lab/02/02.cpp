#include <iostream>
#include <string>

using namespace std;

int main()
{
	string username, password; 
	string inputPass = "";
	cin >> username >> password;

	while (inputPass != password)
	{
		cin >> inputPass;
	}
	cout << "Welcome " << username << "!";

	return 0;
}