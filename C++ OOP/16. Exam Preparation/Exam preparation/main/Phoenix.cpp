#include "Phoenix.h"
#include<iostream>

Phoenix::Phoenix(const AirShipType type,
    const int         health,
    const int         damage,
    const int         maxShield,
    const int         shieldRegenerateRate,
    const int         shipId)
    : ProtossAirShip(type, health, damage, maxShield, shieldRegenerateRate, shipId) { }


void Phoenix::dealDamage(std::vector<std::unique_ptr<AirShip>>& enemyFleet)
{
    AirShip* lastEnemy = enemyFleet.back().get();

    lastEnemy->takeDamage(_damage);

    if (!lastEnemy->isAlive())
    {
        std::cout << "Phoenix with ID: " << _shipId << " killed enemy airship with ID: " << lastEnemy->getAirShipId() << std::endl;
        enemyFleet.pop_back();
    }
}