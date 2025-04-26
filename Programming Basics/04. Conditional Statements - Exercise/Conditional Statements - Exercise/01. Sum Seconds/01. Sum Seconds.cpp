#include <iostream>
#include<string>

using namespace std;

int main()
{
	int firstMinutes, secondMinutes, thirdMinutes;

	cin >> firstMinutes >> secondMinutes >> thirdMinutes;

	int totalTime = firstMinutes + secondMinutes + thirdMinutes;
	int minutes = totalTime / 60;

	int seconds = totalTime % 60;

	string secondsResult = seconds < 10 ? "0" + to_string(seconds) : to_string(seconds);

	cout << minutes << ":" << secondsResult;
}