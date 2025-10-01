#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Range.cpp"

int main()
{
    RangeData rangeData;
    std::string currentLine;

    while (std::getline(std::cin, currentLine) && currentLine != ".")
    {
        std::istringstream reader(currentLine);
        int from, to;
        reader >> from;
        reader >> to;

        rangeData.addRange(Range(from, to));
    }

    std::string currNumber;
    std::cin >> currNumber;

    while (currNumber != ".")
    {
        std::istringstream reader(currNumber);
        int num;
        reader >> num;

        std::cout << (rangeData.IsInRange(num) ? "in" : "out") << std::endl;
        std::cin >> currNumber;
    }
}