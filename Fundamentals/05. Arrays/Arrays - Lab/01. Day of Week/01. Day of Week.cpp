#include <iostream>
#include <string>

using namespace std;

static string dayOfWeek[8]
{
	"Invalid day!",
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday",
	"Sunday"
};

int main()
{
	int n;
	cin >> n;

	if (n > 7 || n < 0)
	{
		cout << "Invalid day!" << endl;
	}
	else
	{
		cout << dayOfWeek[n] << endl;
	}

	return 0;
}