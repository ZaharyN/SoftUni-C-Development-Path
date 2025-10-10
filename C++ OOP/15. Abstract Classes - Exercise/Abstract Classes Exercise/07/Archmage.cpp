#include "Archmage.h"
#include<sstream>
#include<iostream>

Archmage::Archmage(const std::string& name,
	const int maxMana,
	const int baseManaRegenRate,
	const int manaRegenModifier)
	: Hero(name, maxMana, baseManaRegenRate), _manaRegenModifier(manaRegenModifier)
{
}

void Archmage::regenerateMana()
{
	int manaToRegen = _manaRegenRate * _manaRegenModifier;

	_currMana += manaToRegen;
	if (_currMana > _maxMana) _currMana = _maxMana;
}

void Archmage::castSpell(const SpellType spellType)
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
			regenerateMana();
		}
	}
	else
	{
		result << _name << " - not enough mana to cast " << spell.name << std::endl;
	}
	std::cout << result.str();
}