#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

void printArray(vector<string>& wagons)
{
	cout << '|';
	for (int i = 0; i < wagons.size(); i++)
	{
		if (wagons[i] == "empty")
		{
			cout << " " << '|';
			continue;
		}
		cout << wagons[i] << '|';
	}
	cout << endl;
}

void swapElements(vector<string>& wagons, int oldPos, int newPos)
{
	if (oldPos - 1 >= wagons.size() || newPos - 1 >= wagons.size()) return;

	string wagonToMove = wagons[oldPos - 1];
	wagons.erase(wagons.begin() + oldPos - 1);
	wagons.insert(wagons.begin() + newPos - 1, wagonToMove);
}

int main()
{
	vector<string> wagons;

	string input;
	getline(cin, input);

	while (input != "end")
	{
		wagons.push_back(input);
		getline(cin, input);
	}

	getline(cin, input);

	while (input != "E")
	{
		istringstream istr(input);
		char command;
		istr >> command;
		int par1, par2;

		switch (command)
		{
			case 'P':
				printArray(wagons);
				break;

			case 'M':
				istr >> par1;
				istr >> par2;

				swapElements(wagons, par1, par2);
				printArray(wagons);
				break;

			case 'L':
				istr >> par1;
				wagons.erase(wagons.begin() + par1 - 1);
				printArray(wagons);
				break;
		}
		
		getline(cin, input);
	}


	return 0;
}