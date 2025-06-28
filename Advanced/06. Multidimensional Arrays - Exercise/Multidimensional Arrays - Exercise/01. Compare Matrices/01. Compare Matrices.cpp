#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <sstream>

using namespace std;

const int MaxSize = 10;

void readMatrix(array<array<int, MaxSize>, MaxSize>& matrix, int& rows, int& cols)
{
	cin >> rows;
	cin.ignore();
	string input;

	for (int i = 0; i < rows; i++)
	{
		getline(cin, input);
		istringstream reader(input);
		int currNum;
		cols = 0;

		while (reader >> currNum)
		{
			matrix[i][cols] = currNum;
			cols++;
		}
	}
}

bool areEqual(
			array<array<int, MaxSize>, MaxSize>& m1, int& m1Rows, int& m1Cols,
			array<array<int, MaxSize>, MaxSize>& m2, int& m2Rows, int& m2Cols)
{

	if (m1Rows != m2Rows || m1Cols != m2Cols) return false;

	for (int i = 0; i < MaxSize; i++)
	{
		for (int j = 0; j < MaxSize; j++)
		{
			if (m1[i][j] != m2[i][j]) return false;
		}
	}

	return true;
}

int main()
{
	array<array<int, MaxSize>, MaxSize> matrix1, matrix2;
	int m1Rows, m1Cols, m2Rows, m2Cols;

	readMatrix(matrix1, m1Rows, m1Cols);
	readMatrix(matrix2, m2Rows, m2Cols);

	if (areEqual(matrix1,m1Rows, m1Cols, matrix2, m2Rows, m2Cols))
	{
		cout << "equal" << endl;
	}
	else
	{
		cout << "not equal" << endl;
	}

	return 0;
}