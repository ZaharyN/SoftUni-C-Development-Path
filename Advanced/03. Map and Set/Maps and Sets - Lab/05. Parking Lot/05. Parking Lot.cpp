#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	set<string> parkingLot;
	string input;

	while (getline(cin, input))
	{
		if (input == "END")
		{
			break;
		}

		istringstream reader(input);
		string command, plate;
		reader >> command;
		command.pop_back();
		reader >> plate;

		if (command == "IN")
		{
			parkingLot.insert(plate);
		}
		else if (command == "OUT")
		{
			if (find(parkingLot.begin(), parkingLot.end(), plate) != parkingLot.end())
			{
				parkingLot.erase(plate);
			}
		}
	}
	if (parkingLot.empty())
	{
		cout << "Parking Lot is Empty" << endl;
	}
	else
	{
		for (string plate : parkingLot)
		{
			cout << plate << endl;
		}
	}

	return 0;
}