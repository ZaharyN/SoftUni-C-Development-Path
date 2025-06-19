#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string name;
	vector<string> ordered;

	while (n--)
	{
		cin >> name;
		// First way:
		/*pair<set<string>::iterator, bool> it = names.insert(name);

		if (it.second)
		{
			ordered.push_back(name);
		}*/

		//Second way:
		if (find(ordered.begin(), ordered.end(), name) == ordered.end())
		{
			ordered.push_back(name);
		}
	}

	for (string name : ordered)
	{
		cout << name << endl;
	}

	return 0;
}