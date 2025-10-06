#include "DesertEagle.h"
#include "DoFire.h"

DesertEagle::DesertEagle(const int damagePerRound,
	const int clipSize,
	const int remainingAmmo) : Pistol(damagePerRound, clipSize, remainingAmmo)
{
}

bool DesertEagle::fire(PlayerVitalData& enemyPlayerData)
{
	int damageForArmor = _damagePerRound * 0.25;
	int damageForHealth = _damagePerRound * 0.75;

	switch (doFire(enemyPlayerData, _currClipBullets, damageForHealth, damageForArmor))
	{
		case FireResult::RELOADING:
			this->reload();
			return false;

		case FireResult::DEAD:
			return true;

		case FireResult::ALIVE:
			return false;
	}

	return false;
}