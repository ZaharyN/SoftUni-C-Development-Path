#include "Carrier.h"
#include<iostream>

Carrier::Carrier(const AirShipType type,
    const int health,
    const int damage,
    const int maxShield,
    const int shieldRegenerateRate,
    const int shipId)
    : ProtossAirShip(type, health, damage, maxShield, shieldRegenerateRate, shipId), _activeInterceptors(8) { }


void Carrier::takeDamage(const int damage)
{
    ProtossAirShip::takeDamage(damage);

    if (_currHealth < _maxHealth)
    {
        _activeInterceptors = InterceptorDefines::DAMAGED_STATUS_INTERCEPTORS;
    }
}

void Carrier::dealDamage(std::vector<std::unique_ptr<AirShip>>& enemyFleet)
{
    AirShip* lastEnemy = enemyFleet.back().get();

    for (int i = 0; i < _activeInterceptors && !enemyFleet.empty(); i++)
    {
        lastEnemy->takeDamage(_damage);
        if (!lastEnemy->isAlive())
        {
            std::cout << "Carrier with ID: " << _shipId << " killed enemy airship with ID: " << lastEnemy->getAirShipId() << std::endl;
            enemyFleet.pop_back();
            lastEnemy = enemyFleet.back().get();
        }
    }
}