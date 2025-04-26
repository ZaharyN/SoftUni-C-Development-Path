#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n % 2 != 0)
	{
		cout << "Please write an even number." << endl;
		cin >> n;
	}

	if (n < 0) n *= -1;
	cout << "The number is: " << n << endl;

	return 0;
}