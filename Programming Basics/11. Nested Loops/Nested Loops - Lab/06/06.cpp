#include <iostream>

using namespace std;

int main()
{
	int floorsCount, roomsCount;
	cin >> floorsCount >> roomsCount;

	for (int i = floorsCount; i > 0; i--)
	{
		for (int j = 0; j < roomsCount; j++)
		{
			if (i == floorsCount)
			{
				cout << "L" << i << j << " ";
			}
			else if (i % 2 == 0)
			{
				cout << "O" << i << j << " ";
			}
			else if (i % 2 != 0)
			{
				cout << "A" << i << j << " ";
			}
		}

		cout << endl;
	}


	return 0;
}