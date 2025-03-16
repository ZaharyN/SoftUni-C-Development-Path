#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double videoCardsCount = 13;
    double transitionsCount = 13;
    double otherComponentsPrice = 1000;

    int videoCardPrice, transitionPrice;
    double electrictyConsumptionPerDay, videocardProfitPerDay;

    cin >> videoCardPrice >> transitionPrice >> electrictyConsumptionPerDay >> videocardProfitPerDay;

    double moneySpent = videoCardsCount * videoCardPrice + transitionsCount * transitionPrice + otherComponentsPrice;
    
    double profitPerDay = (videocardProfitPerDay - electrictyConsumptionPerDay) * videoCardsCount;

    cout << moneySpent << endl;
    cout << ceil(moneySpent / profitPerDay) << endl;


    return 0;
}