#include "DoFire.h"
#include<iostream>

FireResult doFire(PlayerVitalData& enemyPlayerData, int& currClipBullets, int healthDamage, int armorDamage)
{
	if (currClipBullets <= 0) return FireResult::RELOADING;

	enemyPlayerData.armor -= armorDamage;

	if (enemyPlayerData.armor < 0)
	{
		enemyPlayerData.health += enemyPlayerData.armor;
		enemyPlayerData.armor = 0;
	}
	enemyPlayerData.health -= healthDamage;

	std::cout << "Enemy left with: " << enemyPlayerData.health << " health and " << enemyPlayerData.armor << " armor" << std::endl;
	if (enemyPlayerData.health <= 0) return FireResult::DEAD;

	currClipBullets--;

	return FireResult::ALIVE;
}
