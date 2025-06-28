#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int rows, cols;
	cin >> rows >> cols;

	vector<vector<int>> matrix(rows, vector<int>(cols));

	string word, copy, currentLine;
	cin >> word;
	copy = word;

	int totalElements = rows * cols;
	int wordRepetitions = ceil((double)totalElements / word.size());

	for (size_t i = 0; i < wordRepetitions; i++)
	{
		word += copy;
	}

	int counter = 0;

	for (size_t i = 0; i < rows; i++)
	{
		currentLine = "";

		for (size_t j = 0; j < cols; j++)
		{
			currentLine += word[counter];
			counter++;
		}
		if (i % 2 != 0)
		{
			reverse(currentLine.begin(), currentLine.end());
		}
		cout << currentLine << endl;
	}

	return 0;
}