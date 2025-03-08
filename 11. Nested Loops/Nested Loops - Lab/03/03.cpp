#include <iostream>

using namespace std;

int main()
{
	int n; 
	int combinations = 0;

	cin >> n;

	for (int i = 0; i <= 25; i++)
	{
		for (int j = 0; j <= 25; j++)
		{
			for (int k = 0; k <= 25; k++)
			{
				if (i + j + k == n)
				{
					combinations++;
				}
			}
		}
	}

	cout << combinations;

	return 0;
}