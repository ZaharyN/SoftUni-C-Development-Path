#include <iostream>
#include <string>

using namespace std;

int main()
{
	int judgesCount;
	int presentationsCount = 0;
	double currentGrade;
	double averagePresentationGrade = 0, presentationGradeSum = 0;
	double totalAverage = 0;
	string presentationName;

	cin >> judgesCount;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (getline(cin >> ws, presentationName) && presentationName != "Finish")
	{
		averagePresentationGrade = 0;
		presentationGradeSum = 0;

		for (int i = 0; i < judgesCount; i++)
		{
			cin >> currentGrade;
			presentationGradeSum += currentGrade;
		}
		averagePresentationGrade = presentationGradeSum / judgesCount;
		cout << presentationName << " - " << averagePresentationGrade << "." << endl;

		totalAverage += averagePresentationGrade;
		presentationsCount++;
	}

	cout << "Student's final assessment is " << totalAverage / presentationsCount << "." << endl;

	return 0;
}