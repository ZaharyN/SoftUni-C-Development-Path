#include <iostream>
#include <string>

using namespace std;

string PrintOnes(int n)
{
	switch (n)
	{
		case 1: return "one";
		case 2: return "two";
		case 3: return "three";
		case 4: return "four";
		case 5: return "five";
		case 6: return "six";
		case 7: return "seven";
		case 8: return "eight";
		case 9: return "nine";
		default: return "";
	}
}

string PrintDecimals(int n)
{
	switch (n)
	{
		case 2: return "twenty";
		case 3: return "thirty";
		case 4: return "forty";
		case 5: return "fifty";
		case 6: return "sixty";
		case 7: return "seventy";
		case 8: return "eighty";
		case 9: return "ninety";
		default: return "";
	}
}

string PrintSpecialDecimals(int n)
{
	switch (n)
	{
		case 0: return "ten";
		case 1: return "eleven";
		case 2: return "twelve";
		case 3: return "thirteen";
		case 4: return "fourteen";
		case 5: return "fifteen";
		case 6: return "sixteen";
		case 7: return "seventeen";
		case 8: return "eighteen";
		case 9: return "nineteen";
		default: return "";
	}
}

string PrintHundreds(int n)
{
	return PrintOnes(n) + " hundred ";
}

string PrintThousands(int n)
{
	return PrintOnes(n) + " thousand ";
}

int main()
{
	int n;
	cin >> n;

	if (n == 0)
	{
		cout << "zero";
		return 0;
	}

	int ones = n % 10;
	int decimals = (n / 10) % 10;
	int hundreds = (n / 100) % 10;
	int thousands = (n / 1000) % 10;

	if (thousands)
	{
		cout << PrintThousands(thousands);
	}
	if (hundreds)
	{
		cout << PrintHundreds(hundreds);
	}
	if (decimals)
	{
		if (decimals >= 2)
		{
			cout << PrintDecimals(decimals);
			cout << " " << PrintOnes(ones);

			return 0;
		}
		else
		{
			cout << PrintSpecialDecimals(ones);
			return 0;
		}
	}
	if (ones)
	{
		cout << PrintOnes(ones);
	}
	
	return 0;
}