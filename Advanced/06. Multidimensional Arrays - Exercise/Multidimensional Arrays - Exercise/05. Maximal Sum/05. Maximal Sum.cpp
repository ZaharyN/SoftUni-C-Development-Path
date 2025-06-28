#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int calculateSuqarePoints(
		vector<vector<int>>& originalMatrix, 
		vector<vector<int>>& square, 
		int startRow, int startCol, int& squareSum)
{

	int squareRow = 0;
	int squareCol = 0;

	for (size_t i = startRow; i <= startRow + 2; i++, squareRow++)
	{
		for (size_t j = startCol; j <= startCol + 2; j++, squareCol++)
		{
			squareSum += originalMatrix[i][j];
			square[squareRow][squareCol] = originalMatrix[i][j];
		}
		squareCol = 0;
	}

	return squareSum;
}

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

	int maxSum = INT_MIN;
	int currentSum = 0;
	vector<vector<int>> squareMatrix(3, vector<int>(3));
	vector<vector<int>> maxSqaureMatrix(3, vector<int>(3));

	for (size_t i = 0; i < rows - 2; i++)
	{
		for (size_t j = 0; j < cols - 2; j++)
		{
			currentSum = calculateSuqarePoints(matrix, squareMatrix, i, j, currentSum);
			if (currentSum > maxSum)
			{
				maxSum = currentSum;
				maxSqaureMatrix = squareMatrix;
			}
			currentSum = 0;
		}
	}

	cout << "Sum = " << maxSum << endl;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << maxSqaureMatrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}