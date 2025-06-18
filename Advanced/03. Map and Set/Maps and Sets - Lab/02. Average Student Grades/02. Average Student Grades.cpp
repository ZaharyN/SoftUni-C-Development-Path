#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    map<string, vector<double>>grades;
    int n;
    cin >> n;

    string studentName;
    double currentGrade;

    for (int i = 0; i < n; i++)
    {
        cin >> studentName >> currentGrade;
        
        grades[studentName].push_back(currentGrade);
    }

    for (pair<string, vector<double>> student : grades)
    {
        cout << student.first << " -> ";

        vector<double>& currentStudentGrades = student.second;

        double average = 0;
        cout << fixed << setprecision(2);

        for (int i = 0; i < currentStudentGrades.size(); i++)
        {
            average += currentStudentGrades[i];
            cout << currentStudentGrades[i] << " ";
        }
        average /= currentStudentGrades.size();

        cout << "(avg: " << average << ")" << endl;
    }

    return 0;
}