#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, num = 1;
    cin >> n;

    for (int i = 0; i < n; i ++)
    {
        cout << num << endl;
        sum += num;
        num += 2;
    }
    cout << "Sum: " << sum;

    return 0;
}