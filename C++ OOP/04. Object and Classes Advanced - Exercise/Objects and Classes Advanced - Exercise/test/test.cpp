#include <iostream>

int main()
{
    int a = 5;
    int* pointerA = &a;

    int b = *pointerA;

    int& referenceA = a;

    std::cout << "Cout << a: " << a << std::endl;

    std::cout << "Cout << pointerA: " << pointerA << std::endl;

    std::cout << "Cout << *pointerA: " << *pointerA << std::endl;

    std::cout << "Cout << &pointerA: " << &pointerA << std::endl;

    std::cout << "Cout << b: " << b << std::endl;

    std::cout << "Cout << int& referenceA: " << referenceA << std::endl;

    std::cout << "Cout << &referenceA: " << &referenceA << std::endl;

    std::cout << "Cout << *&pointerA: " << *(&pointerA) << std::endl;
}