#include <iostream>
#include <string>

using namespace std;

int main()
{
	string dayOfWeek;
	cin >> dayOfWeek;

	if (dayOfWeek == "Sunday" || dayOfWeek == "Saturday")
	{
		cout << "Weekend";
	}
	else if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday"
		|| dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" 
		|| dayOfWeek == "Friday")
	{
		cout << "Working day";
	}
	else
	{
		cout << "Error";
	}

	return 0;
}