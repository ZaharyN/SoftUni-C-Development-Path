#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int evenSum = 0;
	int oddSum = 0;

	while (n)
	{
		int currentDidgit = n % 10;
		n /= 10;

		if (currentDidgit % 2 == 0)
		{
			evenSum += currentDidgit;
		}
		else
		{
			oddSum += currentDidgit;
		}
	}
	cout << evenSum * oddSum << endl;

	return 0;
}