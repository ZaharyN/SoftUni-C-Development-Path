#include <iostream>
#include <string>

using namespace std;

int main()
{
	string actorName, judgeName;
	double academyPoints, judgePoints;
	int judgesCount;

	getline(cin, actorName);
	cin >> academyPoints >> judgesCount;

	cout.setf(ios::fixed);
	cout.precision(1);

	for (int i = 0; i < judgesCount; i++)
	{
		getline(cin,  judgeName);
		cin.ignore();
		cin >> judgePoints;

		academyPoints += judgeName.length() * judgePoints / 2;

		if (academyPoints > 1250.5)
		{
			cout << "Congratulations, " << actorName << " got a nominee for leading role with " << academyPoints << "!";
			return 1;
		}
	}

	cout << "Sorry, " << actorName << " you need " << 1250.5 - academyPoints << " more!";

	return 0;
}