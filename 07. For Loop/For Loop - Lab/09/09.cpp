#include <iostream>s

using namespace std;

int main()
{
    int n;
    int leftSum = 0;
    int rightSum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        leftSum += num;
    }

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        rightSum += num;
    }

    if (leftSum == rightSum)
    {
        cout << "Yes, sum = " << leftSum;
    }
    else
    {
        cout << "No, diff = " << abs(leftSum - rightSum);
    }

    return 0;
}