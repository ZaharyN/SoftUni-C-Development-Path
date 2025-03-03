#include <iostream>

using namespace std;

int main()
{
	int n;
	int sum = 1;
	cin >> n;

	while (sum <= n)
	{
		cout << sum << endl;
		sum = sum * 2 + 1;
	}

	return 0;
}