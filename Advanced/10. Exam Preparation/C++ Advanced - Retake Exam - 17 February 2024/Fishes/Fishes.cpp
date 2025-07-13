#include <iostream>
#include <string>
#include <stack>
#include <map>
#include <algorithm>

using namespace std;

void reverseStack(stack<string>& fishbag)
{
	stack<string> reversed;
	while (!fishbag.empty())
	{
		reversed.push(fishbag.top());
		fishbag.pop();
	}

	fishbag = reversed;
}

void printStack(stack<string>& fishbag, int order)
{
	cout << order << ": ";
	if (fishbag.empty())
	{
		cout << "<empty>" << endl;
		return;
	}

	bool isFirst = true;
	while (!fishbag.empty())
	{
		if (isFirst)
		{
			cout << fishbag.top();
			isFirst = false;
		}
		else
		{
			cout << ", " << fishbag.top();
		}
		fishbag.pop();
	}
	cout << endl;
}

int main()
{
	map<string, int> fishCount;
	stack<string> fishBag1;
	stack<string> fishBag2;
	stack<string> fishBag3;

	string input;

	while (getline(cin, input) && input != "END")
	{
		int poleNumber = stoi(input);
		string fishName = input.substr(2, input.size() - 2);

		if (fishName == "THROW")
		{
			string fishToRemove;
			switch (poleNumber)
			{
				case 1:
					if (!fishBag1.empty())
					{
						fishToRemove = fishBag1.top();
						fishBag1.pop();
					}
					break;
				case 2:
					if (!fishBag2.empty())
					{
						fishToRemove = fishBag2.top();
						fishBag2.pop();
					}
					break;
				case 3:
					if (!fishBag3.empty())
					{
						fishToRemove = fishBag3.top();
						fishBag3.pop();
					}
					break;
			}
			fishCount[fishToRemove]--;
			if (fishCount[fishToRemove] == 0)
			{
				fishCount.erase(fishToRemove);
			}
		}
		else
		{
			switch (poleNumber)
			{
				case 1:
					fishBag1.push(fishName);
					break;
				case 2:
					fishBag2.push(fishName);
					break;
				case 3:
					fishBag3.push(fishName);
					break;
			}
			fishCount[fishName]++;
		}
	}

	reverseStack(fishBag1);
	reverseStack(fishBag2);
	reverseStack(fishBag3);

	printStack(fishBag1, 1);
	printStack(fishBag2, 2);
	printStack(fishBag3, 3);

	cout << "Restaurant: ";
	bool nothingFound = true;
	bool isFirst = true;

	while (getline(cin, input) && input != "END")
	{
		string fishForRestaurant = input;
		if (fishCount.find(fishForRestaurant) != fishCount.end())
		{
			nothingFound = false;
			if (isFirst)
			{
				cout << fishForRestaurant << ": " << fishCount[fishForRestaurant];
				isFirst = false;
			}
			else
			{
				cout << ", " << fishForRestaurant << ": " << fishCount[fishForRestaurant];
			}
			fishCount.erase(fishForRestaurant);
		}
	}
	if (nothingFound)
	{
		cout << "<nothing>" << endl;
	}
	else
	{
		cout << endl;
	}

	cout << "Pate: ";
	nothingFound = true;
	isFirst = true;

	for (pair<string, int> fish : fishCount)
	{
		if (fish.second > 0)
		{
			if (isFirst)
			{
				cout << fish.first << ": " << fish.second;
				isFirst = false;
			}
			else
			{
				cout << ", " << fish.first << ": " << fish.second;
			}
		}
	}

	return 0;
}