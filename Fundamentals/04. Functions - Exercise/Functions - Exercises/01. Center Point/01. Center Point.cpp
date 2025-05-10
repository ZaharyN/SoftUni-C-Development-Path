#include <iostream>
#include <cmath>

using namespace std;

double CalculateEuclideanDistance(double x1, double y1, double x2, double y2)
{
	double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	return distance;
}

int main()
{
	double x0 = 0, y0 = 0;
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	double d1 = CalculateEuclideanDistance(x0, y0, x1, y1);
	double d2 = CalculateEuclideanDistance(x0, y0, x2, y2);

	if (d1 < d2)
	{
		cout << "(" << x1 << ", " << y1 << ")" << endl;
	}
	else
	{
		cout << "(" << x2 << ", " << y2 << ")" << endl;
	}

	return 0;
}
