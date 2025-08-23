#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class EuclideanDistance
{
	float x, y;

public:

	void readCoordinates(float x, float y);
	float calculateDisance(float otherX, float otherY);
};

void EuclideanDistance::readCoordinates(float x, float y)
{
	this->x = x;
	this->y = y;
}

float EuclideanDistance::calculateDisance(float otherX, float otherY)
{
	float distance = sqrt(powf((otherX - x), 2) + powf((otherY - y), 2));

	return distance;
}

int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	EuclideanDistance distance;
	distance.readCoordinates(x1, y1);
	float result = distance.calculateDisance(x2, y2);

	cout << fixed << setprecision(3) << result << endl;

	return 0;
}