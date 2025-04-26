#include <iostream>


using namespace std;

int main()
{
    double puzzlePrice = 2.6;
    double dollPrice = 3;
    double teddyBearPrice = 4.1;
    double minionPrice = 8.2;
    double truckPrice = 2;

    double holidayPrice;
    int puzzlesQuantity, dollsQuantity, teddyBearsQuantity, minionsQuantity, trucksQuantity;

    cin >> holidayPrice >> puzzlesQuantity >> dollsQuantity >> teddyBearsQuantity >> minionsQuantity >> trucksQuantity;

    double totalPrice = puzzlePrice * puzzlesQuantity + dollPrice * dollsQuantity +
        teddyBearPrice * teddyBearsQuantity + minionPrice * minionsQuantity + truckPrice * trucksQuantity;

    if (puzzlesQuantity + dollsQuantity + teddyBearsQuantity + minionsQuantity + trucksQuantity >= 50)
    {
        totalPrice -= totalPrice * 0.25;
    }
    totalPrice -= totalPrice * 0.1;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalPrice >= holidayPrice)
    {
        cout << "Yes! " << totalPrice - holidayPrice << " lv left.";
    }
    else
    {
        cout << "Not enough money! " << holidayPrice - totalPrice << " lv needed.";
    }

    return 0;
}