#include <iostream>

using namespace std;

int main()
{
	double bgnToDollarsCoeff = 1.79549;

	double dollars;
	cin >> dollars;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << dollars * bgnToDollarsCoeff;

	return 0;
}