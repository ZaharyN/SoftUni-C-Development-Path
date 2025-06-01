#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> nums{ 1, 2, 3 };
    nums.push_back(7.14);

    cout << nums[3];
}
