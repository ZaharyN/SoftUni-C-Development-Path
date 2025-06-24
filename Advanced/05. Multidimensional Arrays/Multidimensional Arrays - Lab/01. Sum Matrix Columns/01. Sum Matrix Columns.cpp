#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int rows, cols;
	cin >> rows >> cols;

	vector<vector<int>> matrix(rows, vector<int>(cols));

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}

	int colsSum = 0;
	
	for (int col = 0; col < cols; col++)
	{
		for (int row = 0; row < rows; row++)
		{
			colsSum += matrix[row][col];
		}
		cout << colsSum << endl;
		colsSum = 0;
	}

	return 0;
}