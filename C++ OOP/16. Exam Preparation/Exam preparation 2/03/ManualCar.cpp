#include "ManualCar.h"

ManualCar::ManualCar(const std::vector<int>& shiftSpeeds, int maxSpeed, int fuel)
	:Car(maxSpeed, fuel), _shiftSpeeds(shiftSpeeds)
{
}

void ManualCar::increaseSpeed(int speedIncrease, int fuelConsumtion)
{
	currSpeed = std::min(maxSpeed, currSpeed += speedIncrease);

	bool shouldDoubleFuel = false;

	for (int i = 0; i < _shiftSpeeds.size(); i++)
	{
		if (currSpeed >= _shiftSpeeds[i])
		{
			shouldDoubleFuel = true;
			_currShiftIdx++;
		}
	}

	currFuel -= shouldDoubleFuel ? fuelConsumtion * 2 : fuelConsumtion;
}

void ManualCar::decreaseSpeed(int speedDecrease)
{
	currSpeed = std::max(currSpeed - speedDecrease, 0);

	for (int i = _shiftSpeeds.size(); i >= 0; i--)
	{
		if (currSpeed < _shiftSpeeds[i])
		{
			_currShiftIdx--;
		}
	}
}

size_t ManualCar::findShiftIdx() const
{
	return _currShiftIdx;
}