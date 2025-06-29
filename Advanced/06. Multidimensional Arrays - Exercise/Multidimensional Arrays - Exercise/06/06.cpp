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

	int outerCol = cols - 1;

	for (int row = rows-1; row >= 0;)
	{
		int innerRow = row;
		for (int col = outerCol; col < cols && innerRow >= 0; col++)
		{
			cout << matrix[innerRow][col] << " ";
			innerRow--;
			if (col == 0)
			{
				row--;
			}
		}
		if (outerCol != 0) outerCol--;
		cout << endl;
	}
	
	return 0;
}

// 3 x 3 MATRIX: By rows
// 2, 2
// 2, 1 -> 1, 2
// 2, 0 -> 1, 1 -> 0, 2
// 1, 0 -> 0, 1
// 0, 0

// 3 X 4 MATRIX: By rows
// 2, 3
// 2, 2 -> 1, 3
// 2, 1 -> 1, 2 -> 0, 3
// 2, 0 -> 1, 1 -> 0, 2
// 1, 0 -> 0, 1
// 0 ,0


// 3 X 4 MATRIX: By column
// 
// 3, 2
// 3, 1 -> 2, 2
// 3, 0 -> 2, 1 ->  1, 2
// 2, 0 -> 1, 1 ->  0, 2
// 1, 0 -> 0, 1
// 0, 0
