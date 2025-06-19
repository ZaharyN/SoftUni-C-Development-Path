#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	set<string> names;
	int n;
	cin >> n;

	string name;
	while (n--)
	{
		cin >> name;
		names.insert(name);
	}

	for (string name : names)
	{
		cout << name << endl;
	}

	return 0;
}