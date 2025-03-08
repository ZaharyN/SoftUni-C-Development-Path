#include <iostream>

using namespace std;

int main()
{
	int start, end, n, firstNum, secondNum;
	cin >> start >> end >> n;

	int iteration = 0, iterationCount = 0;
	bool found = false;

	for (int i = start; i <= end; i++)
	{
		for (int j = start; j <= end; j++)
		{
			iterationCount++;

			if (i + j == n)
			{
				iteration = iterationCount;
				firstNum = i;
				secondNum = j;
				found = true;
				break;
			}
		}

		if (found) break;
	}

	if (found)
	{
		cout << "Combination N:" << iteration << " (" << firstNum << " + " << secondNum << " = " << n << ")" << endl;
	}
	else
	{
		cout << iterationCount << " combinations - neither equals " << n << endl;
	}

	return 0;
}