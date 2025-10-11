#include "Car.h"

Car::Car(const int speed, const int fuel) :
	maxSpeed(speed), startFuel(fuel),
	currSpeed(0),
	currFuel(fuel),
	distanceTraveled(0),
	id(nextId++)
{
}

int Car::nextId = 0;