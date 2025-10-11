#pragma once

class Car
{
protected:
	int maxSpeed;
	int startFuel;
	static int nextId;

public:
	int currSpeed;
	int currFuel;
	int distanceTraveled;
	int id;

	Car(const int maxSpeed, const int startFuel);

	virtual void increaseSpeed(int speedIncrease, int fuelConsumtion) = 0;
	virtual void decreaseSpeed(int speedDecrease) = 0;
};