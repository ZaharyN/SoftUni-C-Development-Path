#include <iostream>
#include <vector>

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
	
	int sum = 0;
	int reverseDiagonalRow = 0;
	int reverseDiagonalCol = n - 1;

	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			int currentNum = matrix[row][col];

			if (row == col) continue;
			if (row == reverseDiagonalRow && col == reverseDiagonalCol) continue;
			if (currentNum % 2 == 0) continue;

			sum += currentNum;
		}
		reverseDiagonalCol--;
		reverseDiagonalRow++;
	}

	cout << "The sum is: " << sum << endl;

	return 0;
}