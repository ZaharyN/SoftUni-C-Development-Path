#include <iostream>
#include <string>
#include <cctype>
#include "BigInt.h"

bool isDivisibleBy5(const std::string& digits)
{
	char lastDigit = digits.back();

	return lastDigit == '5' || lastDigit == '0';
}

bool isDivisibleBy9(const std::string& digits)
{
	int digitsSum = 0;

	for (size_t i = 0; i < digits.length(); i++)
	{
		digitsSum += digits[i] - '0';
	}

	return digitsSum % 9 == 0;
}

bool isDivisibleBy45(const BigInt& number)
{
	const std::string& digits = number.getDigits();

	return isDivisibleBy5(digits) && isDivisibleBy9(digits);
}

int main()
{
	std::string input1, input2;

	std::cin >> input1 >> input2;

	BigInt s = BigInt(input1);
	BigInt e = BigInt(input2);

	for (; s < e; s += 1)
	{
		if (isDivisibleBy45(s))
		{
			std::cout << s << std::endl;
		}
	}
}