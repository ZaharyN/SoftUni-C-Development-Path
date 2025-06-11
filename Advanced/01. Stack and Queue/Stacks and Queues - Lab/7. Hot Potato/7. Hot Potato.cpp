#include <iostream>
#include <string>
#include <sstream>
#include <queue>

using namespace std;

int main()
{
	int step;
	string names;
	getline(cin, names);
	cin >> step;
	istringstream reader(names);

	string currName;
	queue<string> people;

	while (reader >> currName)
	{
		people.push(currName);
	}

	int currentPass = 1;
	while (people.size() > 1)
	{
		while (currentPass < step)
		{
			people.push(people.front());
			people.pop();
			currentPass++;
		}
		string removed = people.front();
		people.pop();
		cout << "Removed " << removed << endl;
		currentPass = 1;
	}

	cout << "Last is " << people.front() << endl;

	return 0;
}
