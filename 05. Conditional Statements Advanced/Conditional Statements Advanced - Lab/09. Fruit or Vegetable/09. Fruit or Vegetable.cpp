#include <iostream>
#include <string>

using namespace std;

int main()
{
	string product;
	cin >> product;

	if (product == "banana" || product == "apple"
		|| product == "kiwi" || product == "lemon" 
		|| product == "grapes" || product == "cherry")
	{
		cout << "fruit";
	}
	else if (product == "tomato" || product == "cucumber"
		|| product == "pepper" || product == "carrot")
	{
		cout << "vegetable";
	}
	else
	{
		cout << "unknown";
	}

	return 0;
}