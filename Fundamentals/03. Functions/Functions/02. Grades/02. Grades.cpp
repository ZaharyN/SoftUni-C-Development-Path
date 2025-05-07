#include <iostream>

using namespace std;

void ClalculateGrade(float grade)
{
	if (grade >= 5.5)
	{
		cout << "Excellent";
	}
	else if (grade >= 4.50)
	{
		cout << "Very good";
	}
	else if (grade >= 3.50)
	{
		cout << "Good";
	}
	else if (grade >= 3.00)
	{
		cout << "Poor";
	}
	else if (grade >= 2.00)
	{
		cout << "Fail";
	}

	cout << endl;
}

int main()
{
	float grade;
	cin >> grade;
		
	ClalculateGrade(grade);

	return 0;
}