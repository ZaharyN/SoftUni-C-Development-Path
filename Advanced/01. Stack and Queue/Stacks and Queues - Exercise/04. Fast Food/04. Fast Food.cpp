#include <iostream>
#include <queue>
#include <string>
#include <sstream>
#include <climits>

using namespace std;

int getBiggestOrder(queue<int> myQueue)
{
    int biggest = INT_MIN;

    while (!myQueue.empty())
    {
        int curr = myQueue.front();
        if (curr > biggest)
        {
            biggest = curr;
        }
        myQueue.pop();
    }

    return biggest;
}

int main()
{
    int totalQuantity;
    cin >> totalQuantity;
    cin.ignore();

    string input;
    getline(cin, input);
    istringstream reader(input);

    queue<int> orders;
    int currOrder;
    while (reader >> currOrder)
    {
        orders.push(currOrder);
    }

    cout << getBiggestOrder(orders) << endl;

    while (!orders.empty())
    {
        int currentOrder = orders.front();

        if (currentOrder > totalQuantity)
        {
            break;
        }
        totalQuantity -= currentOrder;
        orders.pop();
    }

    if (orders.empty())
    {
        cout << "Orders complete" << endl;
    }
    else
    {
        cout << "Orders left: ";
        while (!orders.empty())
        {
            cout << orders.front() << " ";
            orders.pop();
        }
    }

    return 0;
}