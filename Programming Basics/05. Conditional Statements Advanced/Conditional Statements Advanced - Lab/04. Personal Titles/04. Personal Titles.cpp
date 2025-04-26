#include <iostream>

using namespace std;

int main()
{
	double age;
	char gender;

	cin >> age >> gender;

	if (age >= 16)
	{
		if (gender == 'm')
		{
			cout << "Mr.";
		}
		else
		{
			cout << "Ms.";
		}
	}
	else
	{
		if (gender == 'm')
		{
			cout << "Master";
		}
		else
		{
			cout << "Miss";
		}
	}

	return 0;
}