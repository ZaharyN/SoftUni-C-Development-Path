#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*string studentName;
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

	return 0;*/

	string name;
	cin >> name;

	int grade = 1;
	double mark, retake;
	double average = 0, yearAverage = 0;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (grade <= 12)
	{
		cin >> mark;
		if (mark >= 4.00)
		{
			average += mark;
		}
		else if (mark <= 4.00)
		{
			cin >> retake;
			if (retake < 4.00)
			{
				cout << name << " has been excluded at " << grade << " grade" << endl;
				break;
			}
			else
			{
				average += retake;
			}
		}

		if (grade == 12)
		{
			yearAverage = average / 12.0;
			cout << name << " graduated. Average grade: " << yearAverage << endl;
			break;
		}
		++grade;
	}

	return 0;
}