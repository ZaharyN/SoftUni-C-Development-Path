#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string input;
	int n;
	bool isPrime = true;
	int primeSum = 0, nonPrimeSum = 0;

	while (getline(cin >> ws, input) && input != "stop")
	{
		n = stoi(input);
		isPrime = true;

		if (n < 0)
		{
			cout << "Number is negative." << endl;
			continue;
		}

		double root = sqrt(n);

		for (int i = 2; i <= root; i++)
		{
			if (n % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			primeSum += n;
		}
		else
		{
			nonPrimeSum += n;
		}
	}

	cout << "Sum of all prime numbers is: " << primeSum << endl;
	cout << "Sum of all non prime numbers is: " << nonPrimeSum << endl;

	return 0;
}