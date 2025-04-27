#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	double discriminant = b * b - 4 * a * c;

	if (discriminant < 0)
	{
		cout << "no roots";
	}
	else if (discriminant == 0)
	{
		cout << -b / (2 * a);
	}
	else
	{
		double solution1 = (-b + sqrt(discriminant)) / (2 * a);
		double solution2 = (-b - sqrt(discriminant)) / (2 * a);

		cout << solution1 << " " << solution2;
	}

	return 0;
}