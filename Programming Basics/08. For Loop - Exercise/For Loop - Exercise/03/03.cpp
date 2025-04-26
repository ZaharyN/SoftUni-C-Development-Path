#include <iostream>

using namespace std;

int main()
{
	int n, num;
	cin >> n;

	int p1Nums = 0; int p2Nums = 0; int p3Nums = 0; int p4Nums = 0; int p5Nums = 0;
	

	for (int i = 0; i < n; i++)
	{
		cin >> num;

		if (num < 200)
		{
			p1Nums++;
		}
		else if (num <= 399)
		{
			p2Nums++;
		}
		else if (num <= 599)
		{
			p3Nums++;
		}
		else if (num <= 799)
		{
			p4Nums++;
		}
		else if (num >= 800)
		{
			p5Nums++;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << (double)p1Nums / n * 100 << "%" << endl;
	cout << (double)p2Nums / n * 100 << "%" << endl;
	cout << (double)p3Nums / n * 100 << "%" << endl;
	cout << (double)p4Nums / n * 100 << "%" << endl;
	cout << (double)p5Nums / n * 100 << "%" << endl;

	return 0;
}