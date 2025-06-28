#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int rows, cols;
	cin >> rows >> cols;
	vector < vector<int>> matrix(rows, vector<int>(cols));

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}

	bool found = false;
	int numToFind;
	cin >> numToFind;

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (matrix[i][j] == numToFind)
			{
				cout << i << " " << j << endl;
				found = true;
			}
		}
	}

	if (!found)
	{
		cout << "not found" << endl;
	}

	return 0;
}