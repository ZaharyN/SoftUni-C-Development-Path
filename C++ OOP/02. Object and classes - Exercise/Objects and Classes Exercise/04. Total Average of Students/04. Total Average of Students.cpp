#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Student
{
	string name, surname;
	float average;

public:
	Student(string& name, string& surname, float average)
	{
		this->name = name;
		this->surname = surname;
		this->average = average;
	}

	void print();
	float getAverage() { return this->average; }
};

void Student::print()
{
	cout << name << " " << surname << " " << average << endl;
}

int main()
{
	vector<Student> students;

	int n;
	cin >> n;
	cin.ignore();

	if (n <= 0)
	{
		cout << "Invalid input";
		return 0;
	}
	students.reserve(n);

	string name, surname;
	float studentAverage;

	for (size_t i = 0; i < n; i++)
	{
		cin >> name >> surname >> studentAverage;
		Student currStudent(name, surname, studentAverage);
		students.push_back(currStudent);
	}

	float totalAverage = 0;

	for (Student& student : students)
	{
		student.print();
		totalAverage += student.getAverage();
	}

	cout << totalAverage / students.size() << endl;

	return 0;
}