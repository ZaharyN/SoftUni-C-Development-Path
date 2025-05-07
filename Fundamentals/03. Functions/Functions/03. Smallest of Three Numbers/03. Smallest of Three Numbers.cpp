#include <iostream>

using namespace std;

int getSmaller(int a, int b)
{
	return a * (a <= b) + b * (b < a);
}

int getSmallestOfThree(int a, int b, int c)
{
	return getSmaller(a, getSmaller(b, c));
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	cout << getSmallestOfThree(a, b, c) << endl;

	return 0;
}