#include "DeathKnight.h"
#include<sstream>
#include<iostream>

DeathKnight::DeathKnight(const std::string& name,
    const int maxMana,
    const int baseManaRegenRate)
    : Hero(name, maxMana, baseManaRegenRate){ }

void DeathKnight::castSpell(const SpellType spellType)
{
	std::ostringstream result;
	const Spell& spell = _spells[spellType];

	if (_currMana >= spell.manaCost)
	{
		_currMana -= spell.manaCost;
		if (_currMana < 0) _currMana = 0;

		result << _name << " casted " << spell.name << " for " << spell.manaCost << " mana" << std::endl;

		if (spellType == SpellType::ULTIMATE)
		{
			result << _name << " casted " << _spells[0].name << " for 0 mana" << std::endl;
		}
	}
	else
	{
		result << _name << " - not enough mana to cast " << spell.name << std::endl;
	}
	std::cout << result.str();
}

void DeathKnight::regenerateMana()
{
    _currMana += _manaRegenRate;
    if (_currMana > _maxMana) _currMana = _maxMana;
}