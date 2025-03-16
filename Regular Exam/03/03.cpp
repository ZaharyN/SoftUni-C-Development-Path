#include <iostream>
#include <string>

using namespace std;

int main()
{
    int yearsLife = 0;
    string catBreed;
    char gender;

    getline(cin, catBreed);
    cin >> gender;

    if (catBreed == "British Shorthair")
    {
        yearsLife = 13;
    }
    else if (catBreed == "Siamese")
    {
        yearsLife = 15;
    }
    else if (catBreed == "Persian")
    {
        yearsLife = 14;
    }
    else if (catBreed == "Ragdoll")
    {
        yearsLife = 16;
    }
    else if (catBreed == "American Shorthair")
    {
        yearsLife = 12;
    }
    else if (catBreed == "Siberian")
    {
        yearsLife = 11;
    }
    else
    {
        cout << catBreed << " is invalid cat!" << endl;
        return 0;
    }

    if (gender == 'f')
    {
        yearsLife++;
    }

    cout << yearsLife * 2 << " cat months" << endl;

    return 0;
}