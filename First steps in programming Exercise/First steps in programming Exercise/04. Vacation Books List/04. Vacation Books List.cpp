#include <iostream>

using namespace std;

int main()
{
	int pagesCount;
	int pagesPerHour;
	int daysPerBook;

	cin >> pagesCount >> pagesPerHour >> daysPerBook;

	int hoursPerBook = pagesCount / pagesPerHour;
	cout << hoursPerBook / daysPerBook;
}