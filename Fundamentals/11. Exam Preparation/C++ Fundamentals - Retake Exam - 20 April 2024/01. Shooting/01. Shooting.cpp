#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    vector<int> targets;
    string input;
    getline(cin, input);

    istringstream reader(input);
    int currNum;

    while (reader >> currNum)
    {
        targets.push_back(currNum);
    }

    string index;
    getline(cin, index);
    int counter = 0;

    while (index != "End")
    {
        int validIndex = stoi(index);

        if (validIndex >= targets.size())
        {
            getline(cin, index);
            continue;
        }

        int currTarget = targets[validIndex];
        targets[validIndex] = -1;
        counter++;

        for (int i = 0; i < targets.size(); i++)
        {
            if (targets[i] != -1 && targets[i] > currTarget)
            {
                targets[i] -= currTarget;
            }
            else if (targets[i] != -1 && targets[i] <= currTarget)
            {
                targets[i] += currTarget;
            }
        }

        getline(cin, index);
    }
    cout << "Shot targets: " << counter << " -> ";

    for (int i = 0; i < targets.size(); i++)
    {
        cout << targets[i] << " ";
    }

    return 0;
}