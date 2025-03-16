#include <iostream>
#include <string>

using namespace std;

int main()
{
    int adultsCount = 0, kidsCount = 0;
    double sweaterPrice = 15, toyPrice = 5;
    double totalMoneySpent = 0;
    string input;

    while (getline(cin, input) && input != "Christmas")
    {
        int currentAge = stoi(input);

        if (currentAge <= 16)
        {
            kidsCount++;
            totalMoneySpent += toyPrice;
        }
        else
        {
            adultsCount++;
            totalMoneySpent += sweaterPrice;
        }
    }

    cout << "Number of adults: " << adultsCount << endl;
    cout << "Number of kids: " << kidsCount << endl;
    cout << "Money for toys: " << kidsCount * toyPrice << endl;
    cout << "Money for sweaters: " << adultsCount * sweaterPrice << endl;

    return 0;
}