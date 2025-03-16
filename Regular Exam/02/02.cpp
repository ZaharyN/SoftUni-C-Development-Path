#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    double beerPrice = 1.2;
    double chipsPercentageFromBeerPrice = 0.45;
    string fanName;
    double budget;
    int beerBottlesCount, chipsCount;

    cin >> fanName >> budget >> beerBottlesCount >> chipsCount;

    double totalBeerPrice = beerPrice * beerBottlesCount;
    double totalChipsPrice = totalBeerPrice * chipsPercentageFromBeerPrice * chipsCount;
    totalChipsPrice = ceil(totalChipsPrice);
    double totalMoney = totalBeerPrice + totalChipsPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= totalMoney)
    {
        cout << fanName << " bought a snack and has " << budget - totalMoney << " leva left." << endl;
    }
    else
    {
        cout << fanName << " needs " << totalMoney - budget << " more leva!" << endl;
    }

    return 0;
}