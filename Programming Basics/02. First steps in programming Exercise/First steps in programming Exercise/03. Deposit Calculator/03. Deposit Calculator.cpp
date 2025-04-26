#include <iostream>

using namespace std;

int main()
{
	double deposit;
	int depositInterval;
	double annualInterestRate;

	cin >> deposit >> depositInterval >> annualInterestRate;

	cout << deposit + depositInterval * ((deposit * annualInterestRate / 100) / 12);
}