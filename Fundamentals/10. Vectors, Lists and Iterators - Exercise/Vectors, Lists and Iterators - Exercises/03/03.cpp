#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> checkup;
    vector<int> installation;
    vector<int> result;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int current;
        cin >> current;
        checkup.push_back(current);
    }

    for (int i = 0; i < n; i++)
    {
        int current;
        cin >> current;
        installation.push_back(current);
    }

    for (int i = 0; i < n; i++)
    {
        int decreasing = installation[i] - checkup[i];
        int yearsLasting = installation[i] / decreasing;
        cout << yearsLasting << " ";
    }

    return 0;
}