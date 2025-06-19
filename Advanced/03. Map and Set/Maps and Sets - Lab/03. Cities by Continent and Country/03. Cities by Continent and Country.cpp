#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main()
{
	map<string, map<string, set<string>>> continents;
	int n;
	cin >> n;

	string continent, country, city;
	for (int i = 0; i < n; i++)
	{
		cin >> continent >> country >> city;



		continents[continent][country].insert(city);
	}

	for (auto continent : continents)
	{
		cout << continent.first << ":" << endl;

		for (auto country : continent.second)
		{
			cout << "  " << country.first << " -> ";

			bool isFirst = true;

			for (auto city : country.second)
			{
				if (isFirst)
				{
					cout << city;
					isFirst = false;
				}
				else
				{
					cout << ", " << city;
				}
			}
			cout << endl;
		}
	}

	return 0;
}