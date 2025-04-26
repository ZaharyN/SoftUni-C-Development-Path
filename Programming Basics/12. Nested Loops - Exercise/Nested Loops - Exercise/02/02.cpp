#include <iostream>

using namespace std;

int main()
{
	int start, end;
	cin >> start >> end;

	bool isEvenOrOdd = true;
	int evenSum = 0, oddSum = 0;

	for (int i = start; i <= end; i++)
	{
		int currentNumber = i;
		evenSum = 0;
		oddSum = 0;

		while (currentNumber > 0)
		{
			int currentDigit = currentNumber % 10;
			currentNumber /= 10;

			if (isEvenOrOdd)
			{
				evenSum += currentDigit;
			}
			else
			{
				oddSum += currentDigit;
			}

			isEvenOrOdd = !isEvenOrOdd;
		}

		if (evenSum == oddSum)
		{
			cout << i << " ";
		}
	}

	return 0;
}