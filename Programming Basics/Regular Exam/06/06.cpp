#include <iostream>

using namespace std;

int main()
{
    double goldYieldedPerLocaiton = 0;
    double goldYieldedPerDay;
    int locationCount;

    cin >> locationCount;

    cout.setf(ios::fixed);
    cout.precision(2);

    for (int i = 0; i < locationCount; i++)
    {
        double expectedAverageYieldPerDay;
        int daysDigging;
        cin >> expectedAverageYieldPerDay >> daysDigging;

        goldYieldedPerLocaiton = 0;

        for (int day = 0; day < daysDigging; day++)
        {
            cin >> goldYieldedPerDay;

            goldYieldedPerLocaiton += goldYieldedPerDay;
        }
        
        double realAverageYieldPerDay = goldYieldedPerLocaiton / daysDigging;

        if (realAverageYieldPerDay >= expectedAverageYieldPerDay)
        {
            cout << "Good job! Average gold per day: " << realAverageYieldPerDay << "." << endl;
        }
        else
        {
            cout << "You need " << expectedAverageYieldPerDay - realAverageYieldPerDay << " gold." << endl;
        }
    }
    return 0;
}