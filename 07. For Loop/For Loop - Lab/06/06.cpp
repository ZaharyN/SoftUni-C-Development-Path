#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    int vowelsSum = 0;

    getline(cin, word);

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'a')
        {
            vowelsSum += 1;
        }
        else if (word[i] == 'e')
        {
            vowelsSum += 2;
        }
        else if (word[i] == 'i')
        {
            vowelsSum += 3;
        }
        else if (word[i] == 'o')
        {
            vowelsSum += 4;
        }
        else if (word[i] == 'u')
        {
            vowelsSum += 5;
        }
    }

    cout << vowelsSum;

    return 0;
}