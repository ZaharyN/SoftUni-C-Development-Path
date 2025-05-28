#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string>::size_type n;
    cin >> n;
    cin.ignore();
    
    vector<string> products;
    products.reserve(n);

    while (n--)
    {
        string product;
        getline(cin, product);
        products.push_back(product);
    }

    sort(products.begin(), products.end());

    int counter = 0;
    for (vector<string>::iterator it = products.begin(); it != products.end(); it++)
    {
        cout << ++counter << '.' << *it << endl;
    }

    return 0;
}