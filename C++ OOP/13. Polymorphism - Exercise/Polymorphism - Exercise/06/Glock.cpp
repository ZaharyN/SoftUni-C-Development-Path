#include "Glock.h"
#include "DoFire.h"

Glock::Glock(const int damagePerRound,
	const int clipSize,
	const int remainingAmmo) : Pistol(damagePerRound, clipSize, remainingAmmo)
{
}

bool Glock::fire(PlayerVitalData& enemyPlayerData)
{
	// Fire 3 times
	for (size_t i = 0; i < ROUNDS_PER_FIRE; i++)
	{
		int damageForArmor = _damagePerRound * 0.5;
		int damageForHealth = _damagePerRound * 0.5;

		switch (doFire(enemyPlayerData, _currClipBullets, damageForHealth, damageForArmor))
		{
			case FireResult::RELOADING:
				this->reload();
				return false;

			case FireResult::DEAD:
				return true;

			case FireResult::ALIVE:
				break;
		}
	}

	return false;
}