#include <iostream>

using namespace std;

void PrintAscendingRows(int rows)
{
	for (int i = 0; i <= rows; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}

void PrintDescendingRows(int rows)
{
	for (int i = rows - 1; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}

int main()
{
	int rows;
	cin >> rows;

	PrintAscendingRows(rows);
	PrintDescendingRows(rows);

	return 0;
}