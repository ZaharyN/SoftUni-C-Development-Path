#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int totalFactorialSum = 0;
	int copy = n;
	while (copy > 0)
	{
		int digitFactorial = 1;
		int currentDigit = copy % 10;
		copy /= 10;

		for (int i = currentDigit; i >= 1; i--)
		{
			digitFactorial *= i;
		}
		totalFactorialSum += digitFactorial;
	}

	if (totalFactorialSum == n)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	return 0;
}