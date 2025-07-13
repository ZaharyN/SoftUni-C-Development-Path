#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    map<string, set<int>> rooms;
    string input;

    while (getline(cin, input) && input != "END")
    {
        istringstream reader(input);
        string studentName;
        int roomNumber;
        reader >> studentName;
        reader >> roomNumber;

        rooms[studentName].insert(roomNumber);
    }

    while (getline(cin, input) && input != "END")
    {
        string currentName = input;

        if (rooms.find(currentName) == rooms.end())
        {
            cout << currentName << ": Not found!" << endl;
            continue;
        }

        cout << currentName << ": ";
        for (int roomNum : rooms[currentName])
        {
            cout << roomNum << " ";
        }
        cout << endl;
    }
}