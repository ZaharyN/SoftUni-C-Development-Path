#include <iostream>
#include <iomanip>

using namespace std;

long long CalculateFactorial(int n)
{
	if (n == 0) return 1;

	long long result = 1;
	for (int i = 2; i <= n; i++)
	{
		result *= i;
	}

	return result;
}

int main()
{
	int a, b;
	cin >> a >> b;
	long long factorialA = CalculateFactorial(a);
	long long factorialB = CalculateFactorial(b);

	double result = (double)factorialA / factorialB;

	cout << fixed << setprecision(2) << result << endl;

	return 0;
}