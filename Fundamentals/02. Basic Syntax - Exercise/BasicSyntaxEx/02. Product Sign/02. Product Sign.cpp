#include <iostream>

using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	int negatives = 0;

	if (a == 0 || b == 0 || c == 0)
	{
		cout << "+"; 
		return 0;
	}

	if (a < 0) negatives++;
	if (b < 0) negatives++;
	if (c < 0) negatives++;

	if ((negatives % 2))
	{
		cout << "-";
	}
	else
	{
		cout << "+";
	}
	return 0;
}