#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string shapeType;
	cin >> shapeType;

	double area;

	if (shapeType == "square")
	{
		double a;
		cin >> a;

		area = a * a;
	}
	else if (shapeType == "rectangle")
	{
		double a, b;
		cin >> a >> b;

		area = a * b;
	}
	else if (shapeType == "circle")
	{
		double pi = 3.14159265359;

		double radius;
		cin >> radius;

		area = pi * pow(radius, 2);
	}
	else if (shapeType == "triangle")
	{
		double a, ha;
		cin >> a >> ha;

		area = a * ha / 2;
	}

	cout.setf(ios::fixed);
	cout.precision(3);

	cout << area << endl;

	return 0;
}