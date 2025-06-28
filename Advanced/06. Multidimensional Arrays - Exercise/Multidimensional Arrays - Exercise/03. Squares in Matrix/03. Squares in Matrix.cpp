#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int rows, cols;
	cin >> rows >> cols;

	vector<vector<char>> matrix(rows, vector<char>(cols));

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}

	int squaresFound = 0;

	for (size_t i = 0; i < rows - 1; i++)
	{
		for (size_t j = 1; j < cols; j++)
		{
			if (matrix[i][j] == matrix[i][j - 1]
				&& matrix[i][j] == matrix[i + 1][j - 1]
				&& matrix[i][j] == matrix[i + 1][j])
			{
				squaresFound++;
			}
		}
	}

	cout << squaresFound << endl;

	return 0;
}