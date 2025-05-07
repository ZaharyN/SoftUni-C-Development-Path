#include <iostream>

using namespace std;

int CalculateRectangleArea(int a, int b)
{
	return a * b;
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << CalculateRectangleArea(a, b);

	return 0;
}