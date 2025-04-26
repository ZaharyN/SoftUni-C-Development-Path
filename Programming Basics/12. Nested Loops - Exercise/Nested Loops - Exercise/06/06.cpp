#include <iostream>
#include <string>

using namespace std;

int main()
{
	string movieName, tickeyType;
	int freeSpaces;
	int totalTickets = 0;
	int ticketsPerMovieSold = 0, studentTickets = 0, kidTickets = 0, standartTickets = 0;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (getline(cin >> ws, movieName) && movieName != "Finish")
	{
		cin >> freeSpaces;
		ticketsPerMovieSold = 0;

		while (ticketsPerMovieSold < freeSpaces && getline(cin >> ws, tickeyType) && tickeyType != "End")
		{
			if (tickeyType == "standard")
			{
				standartTickets++;
			}
			else if (tickeyType == "kid")
			{
				kidTickets++;
			}
			else if (tickeyType == "student")
			{
				studentTickets++;
			}
			ticketsPerMovieSold++;
		}

		totalTickets += ticketsPerMovieSold;

		cout << movieName << " - " << 1.0 * ticketsPerMovieSold / freeSpaces * 100.0 << "% full." << endl;
	}

	cout << "Total tickets: " << totalTickets << endl;
	cout << 1.0 * studentTickets / totalTickets * 100 << "% student tickets." << endl;;
	cout << 1.0 * standartTickets / totalTickets * 100 << "% standard tickets." << endl;
	cout << 1.0 * kidTickets / totalTickets * 100 << "% kids tickets." << endl;

	return 0;
}