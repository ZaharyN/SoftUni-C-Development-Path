#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string name;
	int age;
	float averageGrade;

	getline(cin, name);
	cin >> age >> averageGrade;

	cout << setprecision(2) << fixed;
	cout << "Name: " << name << ", Age: " << age << ", Grade: " << averageGrade << endl;

	return 0;
}