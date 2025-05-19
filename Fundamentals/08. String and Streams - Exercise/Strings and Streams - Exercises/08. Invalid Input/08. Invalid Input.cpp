#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string line, current;
	getline(cin, line);

	int sum = 0;

	istringstream reader(line);
	ostringstream words;

	while (reader >> current)
	{
		istringstream numbers(current);
		
		int num;
		if (numbers >> num)
		{
			sum += num;
			continue;
		}

		words << current << " ";
	}

	cout << sum << endl << words.str() << endl;

	return 0;
}