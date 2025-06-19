#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, int> counts;
	int n;
	cin >> n;

	int currNum;
	while (n--)
	{
		cin >> currNum;
		counts[currNum]++;
	}

	for (pair<int, int> n : counts)
	{
		if (n.second % 2 == 0)
		{
			cout << n.first;
		}
	}

	return 0;
}