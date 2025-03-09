#include <iostream>

using namespace std;

int main()
{
	int n, currentNum = 0;
	cin >> n;

	bool isSpecial = true;

	for (int i = 1111; i <= 9999; i++)
	{
		currentNum = i;
		isSpecial = true;

		while (currentNum > 0)
		{
			int currentDigit = currentNum % 10;
			currentNum /= 10;

			if (currentDigit == 0 || n % currentDigit != 0)
			{
				isSpecial = false;
				break;
			}
		}
		if (isSpecial)
		{
			cout << i << " ";
		}
	}

	return 0;
}