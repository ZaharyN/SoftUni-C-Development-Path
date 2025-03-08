#include <iostream>

using namespace std;

int main()
{

	for (int h = 0; h < 24; h++)
	{
		for (int min = 0; min < 60; min++)
		{
			cout << h << ":" << min << endl;
		}
	}

	return 0;
}