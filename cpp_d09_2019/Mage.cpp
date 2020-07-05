/*
** EPITECH PROJECT, 2020
** Mage
** File description:
** Mage
*/

#include "Mage.hpp"

Mage::Mage(const std::string &name, int level) : Character(name, level)
{
    _name = name;
    _level = level;
    _Strength = 6;
    _Stamina = 6;
    _Intelligence = 12;
    _Spirit = 11;
    _Agility = 7;
    _Class = "Mage";
    _Race = "Gnome";
    std::cout << _name << " teleported" << std::endl;
}

Mage::~Mage()
{
}

int Mage::CloseAttack()
{
    if (getPower() > 10) {
        _power -= 10;
        std::cout << _name << " blinks" << std::endl;
        this->Range = RANGE;
        return 0;
    }
    std::cout << _name << " out of power" << std::endl;
    return 0;
}

int Mage::RangeAttack()
{
    if (getPower() > 25) {
        _power -= 25;
        std::cout << _name << " launches a fire ball" << std::endl;
        return 20 + getSpirit();
    }
    std::cout << _name << " out of power" << std::endl;
    return 0;
}

void Mage::Heal()
{
    setPv(_pv + 50);
    std::cout << _name << " takes a potion" << std::endl;
}

void Mage::RestorePower()
{
    setPower(_power + 50 + getIntelligence());
    std::cout << _name << " takes a mana potion" << std::endl; 
}