#include <iostream>
#include <string>

using namespace std;

int main()
{
	int badGradesLimit;
	int badGradesCount = 0, gradesCount = 0, gradesSum = 0, currentGrade;

	string problemName, lastProblemName;

	cin >> badGradesLimit;
	bool breakNeeded = false;

	while (getline(cin >> ws, problemName) && problemName != "Enough")
	{
		cin >> currentGrade;
		lastProblemName = problemName;

		if (currentGrade <= 4)
		{
			badGradesCount++;

			if (badGradesCount >= badGradesLimit)
			{
				breakNeeded = true;
				break;
			}
		}

		gradesCount++;
		gradesSum += currentGrade;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (breakNeeded)
	{
		cout << "You need a break, " << badGradesCount << " poor grades." << endl;
	}
	else
	{
		cout << "Average score: " << 1.0 * gradesSum / gradesCount << endl;
		cout << "Number of problems: " << gradesCount << endl;
		cout << "Last problem: " << lastProblemName << endl;
	}

	return 0;
}