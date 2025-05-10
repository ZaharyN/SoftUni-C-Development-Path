#include <iostream>
#include <string>

using namespace std;

int CompareTwoValues(int a, int b)
{
	return a * (a > b) + b * (b > a);
}

char CompareTwoValues(char a, char b)
{
	return a * (a > b) + b * (b > a);
}

string CompareTwoValues(string a, string b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}


int main()
{
	string type;
	getline(cin,type);

	if (type == "int")
	{
		int a, b;
		cin >> a >> b;

		int bigger = CompareTwoValues(a, b);
		cout << bigger;
	}
	else if (type == "char")
	{
		char a, b;
		cin >> a >> b;

		char bigger = CompareTwoValues(a, b);
		cout << bigger;
	}
	else if (type == "string")
	{
		string a, b;
		getline(cin, a);
		getline(cin, b);

		string bigger = CompareTwoValues(a, b);
		cout << bigger;
	}

	return 0;
}