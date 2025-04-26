#include <iostream>
#include <string>

using namespace std;

int main()
{
	string projectionType;
	int rows, cols; 
	double ticketPrice;

	cin >> projectionType >> rows >> cols;

	if (projectionType == "Premiere")
	{
		ticketPrice = 12;
	}
	else if (projectionType == "Normal")
	{
		ticketPrice = 7.5;
	}
	else if (projectionType == "Discount")
	{
		ticketPrice = 5;
	}

	double totalIncome = rows * cols * ticketPrice;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << totalIncome << " leva";

	return 0;
}