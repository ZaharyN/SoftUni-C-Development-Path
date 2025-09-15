#include <iostream>

int main()
{
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of string: " << sizeof(std::string) << " bytes" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;

    std::cout << std::endl;
    std::cout << "--------------------- POINTERS: --------------------------------" << std::endl;
    std::cout << std::endl;

    int* pointerInt;
    std::cout << "Size of pointerInt: " << sizeof(pointerInt) << " bytes" << std::endl;
    std::cout << "Size of int*: " << sizeof(int*) << " bytes" << std::endl;

    double* pointerDouble;
    std::cout << "Size of pointerDouble: " << sizeof(pointerDouble) << " bytes" << std::endl;
    std::cout << "Size of double*: " << sizeof(double*) << " bytes" << std::endl;

    bool* pointerBool;
    std::cout << "Size of pointerBool: " << sizeof(pointerBool) << " bytes" << std::endl;
    std::cout << "Size of bool*: " << sizeof(bool*) << " bytes" << std::endl;

    char* charPointer;
    std::cout << "Size of charPointer: " << sizeof(charPointer) << " bytes" << std::endl;
    std::cout << "Size of char*: " << sizeof(char*) << " bytes" << std::endl;

    std::string* stringPointer;
    std::cout << "Size of stringPointer: " << sizeof(stringPointer) << " bytes" << std::endl;
    std::cout << "Size of string*: " << sizeof(std::string*) << " bytes" << std::endl;

    std::cout << "Size of nullptr: " << sizeof(nullptr) << " bytes" << std::endl;

    std::cout << std::endl;
    std::cout << "--------------------- MODIFIERS: --------------------------------" << std::endl;
    std::cout << std::endl;


    std::cout << "Size of long int: " << sizeof(long int) << " bytes" << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << " bytes" << std::endl;
    std::cout << "Size of long long int: " << sizeof(long long int) << " bytes" << std::endl;
    std::cout << "Size of short int: " << sizeof(short int) << " bytes" << std::endl;

    int a = 10;
    int b = 20;
    int& referenceA = a;

    referenceA++;

    referenceA = b;
    std::cout << a << std::endl;
}