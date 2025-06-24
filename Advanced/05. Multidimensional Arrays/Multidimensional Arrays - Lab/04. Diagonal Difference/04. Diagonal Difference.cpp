#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> matrix(n, vector<int>(n));

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	int diagonalSum = 0;
	int reverseDiagonalSum = 0;

	for (size_t i = 0; i < n; i++)
	{
		diagonalSum += matrix[i][i];
		reverseDiagonalSum += matrix[i][n - i - 1];
	}

	cout << abs(diagonalSum - reverseDiagonalSum) << endl;

	return 0;
}