#include <iostream>

using namespace std;

int main()
{
	int groupsCount, peopleInGroup, group1, group2, group3, group4, group5;
	int totalPeople = 0;

	cin >> groupsCount;

	group1 = group2 = group3 = group4 = group5 = 0;

	for (int i = 0; i < groupsCount; i++)
	{
		cin >> peopleInGroup;

		if (peopleInGroup <= 5)
		{
			group1 += peopleInGroup;
		}
		else if (peopleInGroup <= 12)
		{
			group2 += peopleInGroup;
		}
		else if (peopleInGroup <= 25)
		{
			group3 += peopleInGroup;
		}
		else if (peopleInGroup <= 40)
		{
			group4 += peopleInGroup;
		}
		else if (peopleInGroup >= 41)
		{
			group5 += peopleInGroup;
		}

		totalPeople += peopleInGroup;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << (double)group1 / totalPeople * 100 << "%" << endl;
	cout << (double)group2 / totalPeople * 100 << "%" << endl;
	cout << (double)group3 / totalPeople * 100 << "%" << endl;
	cout << (double)group4 / totalPeople * 100 << "%" << endl;
	cout << (double)group5 / totalPeople * 100 << "%" << endl;

	return 0;
}
