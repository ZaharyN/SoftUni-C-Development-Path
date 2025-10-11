#include "RaceTrack.h"
#include<iostream>

#include "Car.h"
#include "AutomaticCar.h"
#include "ManualCar.h"

bool RaceTrack::isRaceRunning() const
{
    bool areAllRunning = true;

    for (auto& carPointer : _cars)
    {
        Car* curr = carPointer.get();
        if (curr->currFuel <= 0)
        {
            return false;
        }
    }

    return areAllRunning;
}

void RaceTrack::printWinner()
{
    Car* firstCar = _cars[0].get();
    Car* secondCar = _cars[1].get();

    if (firstCar->currFuel > 0 && secondCar->currFuel > 0)
    {
        std::cout << "No winner" << std::endl;
        return;
    }

    int winningIndex = firstCar->currFuel > 0 ? firstCar->id : secondCar->id;

    std::cout << "Car with index: " << winningIndex << " won!" << std::endl;
}

void RaceTrack::createManualCar(const std::vector<int>& shifts, int maxSpeed,
    int startFuel)
{
    _cars.emplace_back(std::make_unique<ManualCar>(shifts, maxSpeed, startFuel));
}

void RaceTrack::createAutomaticCar(int maxSpeed, int startFuel)
{
    _cars.emplace_back(std::make_unique<AutomaticCar>(maxSpeed, startFuel));
}

void RaceTrack::increaseSpeed(int speedIncrease, int fuelConsumtion)
{
    for (auto& car : _cars)
    {
        car.get()->increaseSpeed(speedIncrease, fuelConsumtion);
    }
}

void RaceTrack::decreaseSpeed(int speedDecrease)
{
    for (auto& car : _cars)
    {
        car.get()->decreaseSpeed(speedDecrease);
    }
}

void RaceTrack::advance()
{
    for (auto& carPointer : _cars)
    {
        Car* currCar = carPointer.get();

        currCar->distanceTraveled += currCar->currSpeed;
    }
}

void RaceTrack::printInfo() const
{
    for (auto& carPointer : _cars)
    {
        Car* currCar = carPointer.get();

        std::cout << "Car with index: " << currCar->id << " has totalDistance: " << currCar->distanceTraveled
            << ", is running with " << currCar->currSpeed << " speed, has " << currCar->currFuel
            << " fuel left" << std::endl;
    }
}