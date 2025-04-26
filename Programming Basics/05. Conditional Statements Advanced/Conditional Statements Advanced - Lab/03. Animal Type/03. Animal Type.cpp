#include <iostream>
#include <string>
using namespace std;

int main()
{
	string animalType;
	cin >> animalType;
	
	if (animalType == "dog")
	{
		cout << "mammal";
	}
	else if (animalType == "crocodile" || animalType == "tortoise" || animalType == "snake")
	{
		cout << "reptile";
	}
	else
	{
		cout << "unknown";
	}

	return 0;
}