#include <iostream>


int& getRef()
{
    int x = 23;
    return x;
}

int main()
{
    int& r = getRef();
    std::cout << r << std::endl;
}