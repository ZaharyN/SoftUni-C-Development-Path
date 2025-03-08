#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int freeSpaceW, freeSpaceL, freeSpaceH, currentBoxes;
	string input;

	cin >> freeSpaceW >> freeSpaceL >> freeSpaceH;

	int freeSpaceCubic = freeSpaceW * freeSpaceL * freeSpaceH;

	while (getline(cin >> ws, input) && input != "Done")
	{
		currentBoxes = stoi(input);

		freeSpaceCubic -= currentBoxes;

		if (freeSpaceCubic < 0)
		{
			cout << "No more free space! You need " << abs(freeSpaceCubic) << " Cubic meters more." << endl;
			return 0;
		}
	}

	cout << freeSpaceCubic << " Cubic meters left." << endl;

	return 0;
}