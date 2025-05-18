#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string first, second;
	getline(cin, first);
	getline(cin, second);

	int pos = second.find(first);

	while (pos != string::npos)
	{
		second.erase(pos, first.size());
		pos = second.find(first);
	}

	cout << second;

	return 0;
}