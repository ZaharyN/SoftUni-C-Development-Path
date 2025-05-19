#include <iostream>
#include <string>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	int index = 1;

	while (index <= line.length() - 1)
	{
		if (line[index - 1] == line[index])
		{
			line.erase(index, 1);
			continue;
		}
		index++;
	}

	cout << line << endl;

	return 0;
}