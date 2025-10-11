#include "AutomaticCar.h"

AutomaticCar::AutomaticCar(int maxSpeed, int fuel)
	: Car(maxSpeed, fuel) { }

void AutomaticCar::increaseSpeed(int speedIncrease, int fuelConsumtion)
{
	currSpeed += speedIncrease;
	if (currSpeed > maxSpeed) currSpeed = maxSpeed;

	currFuel -= fuelConsumtion;
}

void AutomaticCar::decreaseSpeed(int speedDecrease)
{
	currSpeed -= speedDecrease * 2;

	if (currSpeed < 0) currSpeed = 0;
}