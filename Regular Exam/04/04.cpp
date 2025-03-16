#include <iostream>

using namespace std;

int main()
{
    double foodPricePerKg = 12.45;
    int smallCatsCount = 0;
    int mediumCatsCount = 0;
    int largeCatsCount = 0;
    int catsCount;
    double foodQuantity, totalFoodQuantity = 0;

    cin >> catsCount;

    for (int i = 0; i < catsCount; i++)
    {
        cin >> foodQuantity;

        if (foodQuantity >= 10 && foodQuantity < 200)
        {
            smallCatsCount++;
        }
        else if (foodQuantity >= 200 && foodQuantity < 300)
        {
            mediumCatsCount++;
        }
        else if (foodQuantity >= 300 && foodQuantity < 400)
        {
            largeCatsCount++;
        }

        totalFoodQuantity += foodQuantity;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Group 1: " << smallCatsCount << " cats." << endl;
    cout << "Group 2: " << mediumCatsCount << " cats." << endl;
    cout << "Group 3: " << largeCatsCount << " cats." << endl;
    cout << "Price for food per day: " << totalFoodQuantity / 1000 * foodPricePerKg << " lv." << endl;

    return 0;
}