#include "BattleCruser.h"
#include<iostream>

BattleCruser::BattleCruser(const AirShipType type,
    const int         health,
    const int         damage,
    const int         shipId)
    : TerranAirShip(type, health, damage, shipId) { }


void BattleCruser::dealDamage(std::vector<std::unique_ptr<AirShip>>& enemyFleet)
{
     AirShip* lastEnemy = enemyFleet.back().get();

    int damageToDeal = _damage;

    if (_passedTurns % (BattleCruserDefines::YAMATO_CANNON_LOADING_TIME + 1) == 0)
    {
        damageToDeal *= 5;
    }

    lastEnemy->takeDamage(damageToDeal);

    if (!lastEnemy->isAlive())
    {
        std::cout << "BattleCruser with ID: " << _shipId << " killed enemy airship with ID: " << lastEnemy->getAirShipId() << std::endl;
        enemyFleet.pop_back();
    }
}