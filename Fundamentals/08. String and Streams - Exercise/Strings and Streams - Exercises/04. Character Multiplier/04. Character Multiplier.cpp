#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string first, second;
	cin >> first >> second;
	
	int sum = 0;
	int maxIteratios = max(first.length(), second.length());

	for (int i = 0; i < maxIteratios; i++)
	{
		int a, b;
		if (i < first.length())
		{
			a = first[i];
		}
		else
		{
			a = 1;
		}

		if (i < second.length())
		{
			b = second[i];
		}
		else
		{
			b = 1;
		}

		sum += a * b;
	}

	cout << sum << endl;

	return 0;
}