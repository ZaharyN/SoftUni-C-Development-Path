#include <iostream>

using namespace std;

int main()
{
	int n;
	int currentNum = 1;
	bool shouldStop = false;
	cin >> n;

	for (int rows = 0; rows < n; rows++)
	{
		for (int cols = 0; cols <= rows; cols++)
		{
			cout << currentNum << " ";

			if (currentNum >= n)
			{
				shouldStop = true;
				break;
			}
			currentNum++;
		}

		if (shouldStop)
		{
			break;
		}

		cout << endl;
	}

	return 0;
}