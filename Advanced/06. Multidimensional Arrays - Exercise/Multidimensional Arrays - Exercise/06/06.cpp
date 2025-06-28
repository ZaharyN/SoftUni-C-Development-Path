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

	return 0;
}

// 3 X 4 MATRIX:
// 2, 3
// 1, 3 + 2, 2
// 0, 3 + 1, 2 + 2, 1
// 0, 2 + 1, 1 + 2, 0
// 0, 1 + 1, 0
// 0, 0


// 3 X 3 MATRIX:
// 2, 2
// 1, 2 + 2, 1
// 0, 2 + 1, 1 + 2, 0
// 0, 1 + 1, 0
// 0, 0
