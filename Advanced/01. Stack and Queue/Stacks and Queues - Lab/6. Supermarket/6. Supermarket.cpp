#include <iostream>
#include <string>
#include <sstream>
#include <queue>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    queue<string> names;

    while (input != "End")
    {
        if (input == "Paid")
        {
            while (!names.empty())
            {
                cout << names.front() << endl;
                names.pop();
            }
        }
        else
        {
            names.push(input);
        }

        getline(cin, input);
    }

    cout << names.size() << " people remaining." << endl;
}