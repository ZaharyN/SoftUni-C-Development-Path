#include <iostream>
#include <string>

using namespace std;

int main()
{
	string bookToFind, currentBook;
	getline(cin, bookToFind);

	int booksChecked = 0;

	while (getline(cin, currentBook) && currentBook != "No More Books")
	{
		if (currentBook == bookToFind)
		{
			cout << "You checked " << booksChecked << " books and found it." << endl;
			return 0;
		}

		booksChecked++;
	}

	cout << "The book you search is not here!" << endl;
	cout << "You checked " << booksChecked << " books." << endl;

	return 0;
}