#include <iostream>

using namespace std;

int main()
{
	int examHour, examMinutes, arriveHour, arriveMinutes;

	cin >> examHour >> examMinutes >> arriveHour >> arriveMinutes;
	
	int totalTimeExam = examHour * 60 + examMinutes;
	int totalTimeArrival = arriveHour * 60 + arriveMinutes;

	if (totalTimeExam == totalTimeArrival)
	{
		cout << "On time";
	}
	else if (totalTimeArrival < totalTimeExam)
	{
		if (totalTimeExam - totalTimeArrival <= 30)
		{
			cout << "On time" << endl;
			cout << totalTimeExam - totalTimeArrival << " minutes before the start";
		}
		else if (totalTimeExam - totalTimeArrival > 30 && totalTimeExam - totalTimeArrival < 60)
		{
			cout << "Early" << endl;
			cout << totalTimeExam - totalTimeArrival << " minutes before the start";
		}
		else if (totalTimeExam - totalTimeArrival >= 60)
		{
			cout << "Early" << endl;

			int hoursDiff = (totalTimeExam - totalTimeArrival) / 60;
			int minutesDiff = (totalTimeExam - totalTimeArrival) % 60;

			if (minutesDiff < 10)
			{
				cout << hoursDiff << ":0" << minutesDiff << " hours before the start";
			}
			else
			{
				cout << hoursDiff << ":" << minutesDiff << " hours before the start";
			}
		}
	}
	else
	{
		cout << "Late" << endl;

		if (totalTimeArrival - totalTimeExam < 60)
		{
			cout << totalTimeArrival - totalTimeExam << " minutes after the start";
		}
		else
		{
			int hoursDiff = (totalTimeArrival - totalTimeExam) / 60;
			int minutesDiff = (totalTimeArrival - totalTimeExam) % 60;
			
			if (minutesDiff < 10)
			{
				cout << hoursDiff << ":0" << minutesDiff << " hours after the start";
			}
			else
			{
				cout << hoursDiff << ":" << minutesDiff << " hours after the start";
			}
		}
	}

	return 0;
}