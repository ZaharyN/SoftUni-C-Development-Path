#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<char>> matrix(n, vector<char>(n));

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	char charToFind;
	cin >> charToFind;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (matrix[i][j] == charToFind)
			{
				cout << "(" << i << ", " << j << ")" << endl;
				return 0;
			}
		}
	}

	cout << charToFind << " does not occur in the matrix" << endl;
	return 0;
}