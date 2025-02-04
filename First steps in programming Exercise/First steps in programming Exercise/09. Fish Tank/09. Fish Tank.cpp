#include <iostream>

using namespace std;

int main()
{
	int length, width, height;
	double spaceTakenPercentage;

	cin >> length >> width >> height >> spaceTakenPercentage;

	double totalSpaceInCM = length * width * height;
	double totalSpaceInDM = totalSpaceInCM / 1000;
	double freeSpace = totalSpaceInDM - totalSpaceInDM * spaceTakenPercentage / 100;
	
	cout << freeSpace;
}