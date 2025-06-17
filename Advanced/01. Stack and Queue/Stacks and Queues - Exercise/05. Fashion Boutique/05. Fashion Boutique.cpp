#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main()
{
	string input;
	getline(cin, input);
	istringstream reader(input);

	stack<int> clothes;
	int currCloth;
	while (reader >> currCloth)
	{
		clothes.push(currCloth);
	}

	int rackCapacity;
	cin >> rackCapacity;

	int racksUsed = 1;
	int currRackCapacity = rackCapacity;

	while (!clothes.empty())
	{
		int currCloth = clothes.top();
		if (currCloth <= currRackCapacity)
		{
			currRackCapacity -= currCloth;
			clothes.pop();
		}
		else
		{
			currRackCapacity = rackCapacity;
			racksUsed++;
		}
	}

	cout << racksUsed << endl;

	return 0;
}