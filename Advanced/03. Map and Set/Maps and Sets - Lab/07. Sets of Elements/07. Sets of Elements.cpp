#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	set<int> first;
	set<int> second;

	int n, m;
	cin >> n >> m;

	int currNum;
	while (n--)
	{
		cin >> currNum;
		first.insert(currNum);
	}

	while (m--)
	{
		cin >> currNum;
		second.insert(currNum);
	}

	for (int n : first)
	{
		if (second.find(n) != second.end())
		{
			cout << n << " ";
		}
	}

	return 0;
}
