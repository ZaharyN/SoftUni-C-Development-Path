#include<iostream>
#include "Viking.h"
#include "BattleField.h"
#include "Phoenix.h"

Viking::Viking(const AirShipType type,
    const int health,
    const int baseDamage,
    const int shipId)
    : TerranAirShip(type, health, baseDamage, shipId){ }


void Viking::dealDamage(std::vector<std::unique_ptr<AirShip>>& enemyFleet)
{
    AirShip* lastEnemy = enemyFleet.back().get();
    int damageToDeal = _damage;

    if (dynamic_cast<Phoenix*>(lastEnemy) != nullptr)
    {
        damageToDeal *= 2;
    }

    lastEnemy->takeDamage(damageToDeal);

    if (!lastEnemy->isAlive())
    {
        std::cout << "Viking with ID: " << _shipId << " killed enemy airship with ID: " << lastEnemy->getAirShipId() << std::endl;
        enemyFleet.pop_back();
    }
}