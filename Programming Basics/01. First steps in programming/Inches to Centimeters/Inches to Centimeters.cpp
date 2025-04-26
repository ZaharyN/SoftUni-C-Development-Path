#include <iostream>

using namespace std;

int main()
{
	const double CM_TO_INCHES_COEFFICIENT = 2.54;

	double a;
	cin >> a;

	cout << a * CM_TO_INCHES_COEFFICIENT;

	return 0;
}
