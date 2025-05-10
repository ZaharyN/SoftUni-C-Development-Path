#include <iostream>

using namespace std;

int Addition(int a, int b)
{
	return a + b;
}

int Subtraction(int a, int b)
{
	return a - b;
}

int Multiplication(int a, int b)
{
	return a * b;
}

double Division(int a, int b)
{
	return (double)a / b;
}

int main()
{
	int a, b;
	char symbol;
	cin >> a >> b >> symbol;

	double result;
	if (symbol == '+')
	{
		result = Addition(a, b);
	}
	else if (symbol == '-')
	{
		result = Subtraction(a, b);
	}
	else if (symbol == '*')
	{
		result = Multiplication(a, b);
	}
	else if (symbol == '/')
	{
		result = Division(a, b);
	}

	cout << result << endl;
	return 0;
}