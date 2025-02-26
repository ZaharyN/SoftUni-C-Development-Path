#include <iostream>

using namespace std;

int main()
{
	double a, b;
	char mathOperator;
	cin >> a >> b >> mathOperator;

	if (mathOperator == '+')
	{
		double result = a + b;
		string evenOrOdd = (int)result % 2 == 0 ? "even" : "odd";
		
		cout << a << " " << mathOperator << " " << b << " = " << result << " - " << evenOrOdd << endl;
	}
	else if (mathOperator == '-')
	{
		double result = a - b;
		string evenOrOdd = (int)result % 2 == 0 ? "even" : "odd";

		cout << a << " " << mathOperator << " " << b << " = " << result << " - " << evenOrOdd << endl;
	}
	else if (mathOperator == '*')
	{
		double result = a * b;
		string evenOrOdd = (int)result % 2 == 0 ? "even" : "odd";

		cout << a << " " << mathOperator << " " << b << " = " << result << " - " << evenOrOdd << endl;
	}
	else if (mathOperator == '/')
	{
		if (b == 0)
		{
			cout << "Cannot divide " << a << " by zero" << endl;
		}
		else
		{
			double result = a / b;

			cout << a << " " << mathOperator << " " << b;

			cout.setf(ios::fixed);
			cout.precision(2);

			cout << " = " << result;
		}
	}
	else if (mathOperator == '%')
	{
		if (b == 0)
		{
			cout << "Cannot divide " << a << " by zero" << endl;
		}
		else
		{
			double result = (int)a % (int)b;
			cout << a << " " << mathOperator << " " << b << " = " << result << endl;
		}
	}

	return 0;
}