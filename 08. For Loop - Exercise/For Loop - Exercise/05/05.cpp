#include <iostream>
#include <string>

using namespace std;

int main()
{
	int openBrowsersCount, salary;
	string currentBrowser;
	cin >> openBrowsersCount >> salary;

	for (int i = 0; i < openBrowsersCount; i++)
	{
		cin >> currentBrowser;

		if (currentBrowser == "Facebook")
		{
			salary -= 150;
		}
		else if (currentBrowser == "Instagram")
		{
			salary -= 100;
		}
		else if (currentBrowser == "Reddit")
		{
			salary -= 50;
		}

		if (salary <= 0)
		{
			cout << "You have lost your salary.";
			return 1;
		}
	}

	cout << salary;

	return 0;
}