#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>
#include <cmath>

using namespace std;

int main()
{
	map<string, int> resources;
	vector<string> appearance;
	string resource;
	int quantity;

	while (true)
	{
		cin >> resource;
		if (resource == "stop") break;
		cin >> quantity;

		pair<map<string, int>::iterator, bool> it = resources.insert(pair<string, int>(resource, 0));
		if (it.second)
		{
			appearance.push_back(resource);
		}
		resources[resource] += quantity;
	}

	for (string resource : appearance)
	{
		int quantity = resources[resource];
		cout << resource << " -> " << quantity << endl;
	}

	return 0;
}