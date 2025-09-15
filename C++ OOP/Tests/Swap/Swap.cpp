#include <iostream>

int main()
{
    int a = 7;
    int b = 5;

    std::cout << "A before swap: " << a << std::endl;
    std::cout << "B before swap: " << b << std::endl;

    a = a * b;
    b = a / b;
    a = a / b;

    std::cout << "A after swap: " << a << std::endl;
    std::cout << "B after swap: " << b << std::endl;
}
