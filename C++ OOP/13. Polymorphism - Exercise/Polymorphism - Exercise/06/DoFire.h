#pragma once

#include "Structs.h"


enum FireResult
{
	RELOADING = 0,
	ALIVE = 1,
	DEAD = 2,
};

FireResult doFire(PlayerVitalData& enemyPlayerData, int& currClipBullets, int healthDamage, int armorDamage);
