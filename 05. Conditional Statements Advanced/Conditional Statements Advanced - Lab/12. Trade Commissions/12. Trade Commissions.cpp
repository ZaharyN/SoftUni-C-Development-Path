#include <iostream>
#include <string>

using namespace std;

int main()
{
	string city;
	double sales, commission;
	bool hasError = false;

	cin >> city >> sales;

	if (city == "Sofia")
	{
		if (sales < 0)
		{
			hasError = true;
		}
		else if (sales >= 0 && sales <= 500)
		{
			commission = 0.05;
		}
		else if (sales <= 1000)
		{
			commission = 0.07;
		}
		else if (sales <= 10000)
		{
			commission = 0.08;
		}
		else if (sales > 10000)
		{
			commission = 0.12;
		}
	}
	else if (city == "Varna")
	{
		if (sales < 0)
		{
			hasError = true;
		}
		else if (sales >= 0 && sales <= 500)
		{
			commission = 0.045;
		}
		else if (sales <= 1000)
		{
			commission = 0.075;
		}
		else if (sales <= 10000)
		{
			commission = 0.1;
		}
		else if (sales > 10000)
		{
			commission = 0.13;
		}
	}
	else if (city == "Plovdiv")
	{
		if (sales < 0)
		{
			hasError = true;
		}
		else if (sales >= 0 && sales <= 500)
		{
			commission = 0.055;
		}
		else if (sales <= 1000)
		{
			commission = 0.08;
		}
		else if (sales <= 10000)
		{
			commission = 0.12;
		}
		else if (sales > 10000)
		{
			commission = 0.145;
		}
	}
	else
	{
		hasError = true;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (hasError)
	{
		cout << "error" << endl;
	}
	else
	{
		cout << sales * commission << endl;
	}

	return 0;
}