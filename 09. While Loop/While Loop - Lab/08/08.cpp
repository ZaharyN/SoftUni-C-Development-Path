#include <iostream>

using namespace std;

int main()
{
	string studentName;
	cin >> studentName;

	double grade, sum = 0;
	int gradeCounter = 1;
	int expelledCounter = 0;

	while (gradeCounter <= 12)
	{
		cin >> grade;

		if (grade < 4.00)
		{
			expelledCounter++;

			if (expelledCounter >= 2)
			{
				cout << studentName << " has been excluded at " << gradeCounter << " grade" << endl;
				return 1;
			}
		}
		else
		{
			sum += grade;
			gradeCounter++;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << studentName << " graduated. Average grade: " << sum / 12 << endl;

	return 0;
}