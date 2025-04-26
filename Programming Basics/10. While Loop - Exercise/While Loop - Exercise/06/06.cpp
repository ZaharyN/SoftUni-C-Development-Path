#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int width, length, currentPieceSize;
	string input;

	cin >> width >> length;

	int totalPieces = width * length;

	while (getline(cin >> ws, input) && input != "STOP")
	{
		currentPieceSize = stoi(input);

		totalPieces -= currentPieceSize;

		if (totalPieces < 0)
		{
			cout << "No more cake left! You need " << abs(totalPieces) << " pieces more." << endl;
			return 1;
		}
	}

	cout << totalPieces << " pieces are left." << endl;

	return 0;
}