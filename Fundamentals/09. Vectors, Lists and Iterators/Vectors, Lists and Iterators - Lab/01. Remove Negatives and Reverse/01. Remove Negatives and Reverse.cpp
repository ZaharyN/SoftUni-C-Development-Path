#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	std::vector<int>myArr;
	string numbers;
	getline(cin, numbers);

	std::istringstream input(numbers);
	int currentNum;

	while (input >> currentNum)
	{
		if (currentNum > 0)
		{
			myArr.push_back(currentNum);
		}
	}

	if (myArr.empty())
	{
		cout << "empty" << endl;
		return 0;
	}

	for (vector<int>::reverse_iterator it = myArr.rbegin(); it != myArr.rend(); it++)
	{
		cout << *it << " ";
	}
	
	return 0;
}