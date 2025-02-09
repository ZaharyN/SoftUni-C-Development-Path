#include <iostream>
#include <string>

using namespace std;

int main()
{
	string guess = "s3cr3t!P@ssw0rd";
	string realPass;
	cin >> realPass;

	if (guess == realPass)
	{
		cout << "Welcome" << endl;
	}
	else 
	{
		cout << "Wrong password!" << endl;
	}

	return 0;
}