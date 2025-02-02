#include <iostream>

using namespace std;

int main()
{
	const int HOURS_NEEDED_PER_PRJOECT = 3;

	string name;
	int totalProjects;

	cin >> name >> totalProjects;

	cout << "The architect " << name << " will need " << totalProjects * HOURS_NEEDED_PER_PRJOECT << " "
		<< "hours to complete " << totalProjects << " project/s.";

	return 0;
}