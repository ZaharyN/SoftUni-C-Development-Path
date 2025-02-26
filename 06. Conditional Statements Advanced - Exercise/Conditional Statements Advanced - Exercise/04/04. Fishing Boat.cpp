#include <iostream>
#include <string>

using namespace std;

int main()
{
    double groupBudget, boatRent;
    int fishermenCount;
    string season;
    
    cin >> groupBudget >> season >> fishermenCount;


    if (season == "Spring")
    {
        boatRent = 3000;
    }
    else if (season == "Summer" || season == "Autumn")
    {
        boatRent = 4200;
    }
    else if (season == "Winter")
    {
        boatRent = 2600;
    }

    if (fishermenCount <= 6)
    {
        boatRent -= boatRent * 0.1;
    }
    else if (fishermenCount >= 7 && fishermenCount <= 11)
    {
        boatRent -= boatRent * 0.15;
    }
    else if (fishermenCount >= 12)
    {
        boatRent -= boatRent * 0.25;
    }

    if (fishermenCount % 2 == 0 && season != "Autumn")
    {
        boatRent -= boatRent * 0.05;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (groupBudget >= boatRent)
    {
        cout << "Yes! You have " << groupBudget - boatRent << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money! You need " << boatRent - groupBudget << " leva." << endl;
    }

    return 0;
}