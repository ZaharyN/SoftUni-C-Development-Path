#include <iostream>
#include <utility>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	vector<double> order;
	map<double, int> count;

	string input;
	getline(cin, input);

	istringstream reader(input);

	double currNum;
	while (reader >> currNum)
	{
		pair<map<double, int>::iterator, bool> it = count.insert(pair<double, int>(currNum, 0));
		if (it.second)
		{
			order.push_back(currNum);
		}
		count[currNum]++;
	}

	for (double num : order)
	{
		cout << num << " - " << count[num] << " times" << endl;
	}

	return 0;
}