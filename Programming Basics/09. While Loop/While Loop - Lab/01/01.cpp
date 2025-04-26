#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password;

	while (cin >> password && password != "Stop")
	{
		cout << password << endl;
		cin >> password;
	}

	return 0;
}
