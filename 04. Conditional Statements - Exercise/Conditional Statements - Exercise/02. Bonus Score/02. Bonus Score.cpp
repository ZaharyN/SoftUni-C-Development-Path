#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double result = n;

	if (n > 1000)
	{
		result += 0.1 * n;
	}
	else if (n > 100)
	{
		result += 0.2 * n;
	}
	else
	{
		result += 5;
	}

	if (n % 2 == 0)
	{
		result++;
	}
	if (n % 10 == 5)
	{
		result += 2;
	}

	cout << result - n << endl;
	cout << result << endl;

	return 0;
}