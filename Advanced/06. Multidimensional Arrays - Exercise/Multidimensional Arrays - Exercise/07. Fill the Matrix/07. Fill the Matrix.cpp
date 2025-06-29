#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string input;
	getline(cin, input);
	istringstream reader(input);

	int n;
	char comma, letter;
	reader >> n >> comma >> letter;

	if (n < 0) return 0;

	vector<vector<int>> matrix(n, vector<int>(n));

	int counter = 1;
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			matrix[row][col] = counter++;
		}
	}

	if (letter == 'A')
	{
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				cout << matrix[j][i] << " ";
			}
			cout << endl;
		}
	}
	else if (letter == 'B')
	{
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				if (j % 2 != 0)
				{
					cout << matrix[j][n - 1 -i] << " ";
				}
				else
				{
					cout << matrix[j][i] << " ";
				}
			}
			cout << endl;
		}
	}

	return 0;
}