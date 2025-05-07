#include <iostream>

using namespace std;

void CheckSign(int n);

int main()
{
	int n;
	cin >> n;
	CheckSign(n);

	return 0;
}

void CheckSign(int n)
{
	cout << "The number " << n << " is ";

	if (n > 0)
	{
		cout << "positive." << endl;
	}
	else if (n == 0)
	{
		cout << "zero." << endl;
	}
	else
	{
		cout << "negative." << endl;
	}
}