#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	if (number >= -100 && number <= 100 && number != 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}