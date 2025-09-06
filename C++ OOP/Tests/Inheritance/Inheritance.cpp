#include <iostream>

class Vehicle
{
public:
    int speed = 10;
    Vehicle()
    {
        std::cout << "I am base Vehicle! My speed is: " << speed << std::endl;
    }
};

class LandVehicle : public Vehicle
{
public:
    int speed = 200;
    LandVehicle()
    {
        std::cout << "I am LandVehicle! My speed is: " << speed << std::endl;
    }
};

class WaterVehicle : public Vehicle
{
public:
    int speed = 100;
    WaterVehicle()
    {
        std::cout << "I am WaterVehicle! My speed is: " << speed << std::endl;
    }
};

class AmphybiousVehicle : public LandVehicle, public WaterVehicle
{
public:
    int speed = 30;
    AmphybiousVehicle()
    {
        std::cout << "I am amphybious vehicle! MY speed is: " << speed << std::endl;
    }
};

int main()
{
    AmphybiousVehicle car;
    std::cout << car.speed;
}