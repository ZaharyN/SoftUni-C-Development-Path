#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>

using namespace std;

vector<int> readVector(string& input)
{
	vector<int> arr;
	istringstream streamInput(input);
	int currNum;

	while (streamInput >> currNum)
	{
		arr.push_back(currNum);
	}

	return arr;
}

int main()
{
	vector<int> firstArr, secondArr;
	string input;
	int currentNum;

	getline(cin, input);
	firstArr = readVector(input);

	getline(cin, input);
	secondArr = readVector(input);

	int maxIterations = max(firstArr.size(), secondArr.size());

	for (vector<int>::size_type i = 0; i < maxIterations; i++)
	{
		if (i < firstArr.size())
		{
			cout << firstArr[i] << " ";
		}
		if (i < secondArr.size())
		{
			cout << secondArr[i] << " ";
		}
	}
	
	return 0;
}