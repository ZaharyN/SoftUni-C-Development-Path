#include <iostream>

using namespace std;

int main()
{
	int examHour, examMinutes, arriveHour, arriveMinutes;

	cin >> examHour >> examMinutes >> arriveHour >> arriveMinutes;

	if (examHour == arriveHour)
	{
		if (arriveMinutes == examMinutes)
		{
			cout << "On time";
		}
		else if (arriveMinutes > examMinutes )
		{
			cout << "Late" << endl;
			cout << arriveMinutes - examMinutes << " minutes after the start" << endl;
		}
		else if (arriveMinutes < examMinutes && arriveMinutes > examMinutes - 30)
		{
			cout << "On time" << endl;
			cout << examMinutes - arriveMinutes << " minutes before the start" << endl;
		}
		else
		{
			cout << "Early" << endl;
			cout << examMinutes - arriveMinutes << " before the start" << endl;
		}
	}
	else if (arriveHour < examHour)
	{
		if (arriveMinutes <= examMinutes)
		{
			// More than an hour difference
			cout << "Early" << endl;
			if (examMinutes - arriveMinutes < 10)
			{
				cout << examHour - arriveHour << ":0" << examMinutes - arriveMinutes << " hours before the start";
			}
			else
			{
				cout << examHour - arriveHour << ":" << examMinutes - arriveMinutes << " hours before the start";
			}
		}
		else if (arriveMinutes >= examMinutes)
		{
			if (++arriveHour >= examHour)
			{
				if (60 - arriveMinutes + examMinutes <= 30)
				{
					cout << "On time" << endl;
					cout << 60 - arriveMinutes + examMinutes << " minutes before the start" << endl;
				}
				else
				{
					cout << "Early" << endl;
					cout << 60 - arriveMinutes + examMinutes << " minutes before the start" << endl;
				}
			}
			else
			{
				cout << "Early" << endl;

				if (arriveMinutes - examMinutes < 10)
				{
					cout << arriveHour << ":0" << arriveMinutes - examMinutes << " minutes before the start" << endl;
				}
				else
				{
					cout << arriveHour << ":" << arriveMinutes - examMinutes << " minutes before the start" << endl;
				}
			}
		}
	}
	else if (arriveHour > examHour)
	{
		if (arriveMinutes < examMinutes)
		{
			cout << "Late" << endl;
			if (--arriveHour >= 1)
			{

			}

			cout << 60 - (examMinutes - arriveMinutes) << " minutes after the start";
		}
		else if (arriveMinutes >= examMinutes)
		{
			if (arriveMinutes - examMinutes < 10)
			{
				cout << arriveHour - examHour << ":0" << arriveMinutes - examMinutes << " hours after the start";
			}
			else
			{
				cout << arriveHour - examHour << ":" << arriveMinutes - examMinutes << " hours after the start";
			}
		}
	}

	return 0;
}

// 5:20 - exam 

// I come at 4:56 - on time
// I come at 5: 10 - on time

// I come at 5:20 - late
// I come at 5:30 - late





//5:40 - exam
// 
// I come at 4 : 30



// 4: 40
// 5:30


// OK first state when the hours are even 5:40

//5:40 - exact
//5:20 - on time
//5:01 - early
//5:45 - late

// 4: 30 - early with more than an hour
// 4: 50 - early with mroe than an hour, only minutes\
// if the time was 5: 10, 4:50 is on time ! 

// 