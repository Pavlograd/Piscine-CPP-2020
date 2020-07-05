/*
** EPITECH PROJECT, 2020
** Warrior
** File description:
** Warrior
*/

#include "Warrior.hpp"
#include "Character.hpp"

Warrior::Warrior(const std::string &name, int level, const std::string &weapon) : Character(name, level)
{
    _name = name;
    _level = level;
    _Strength = 12;
    _Stamina = 12;
    _Intelligence = 6;
    _Spirit = 5;
    _Agility = 7;
    _Class = "Warrior";
    _Race = "Dwarf";
    _weaponName = weapon;
    std::cout << "I'm " << _name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{
}

int Warrior::CloseAttack()
{
    if (getPower() > 30) {
        _power -= 30;
        std::cout << _name << " strikes with his " << _weaponName << std::endl;
        return 20 + getStrength();
    }
    std::cout << _name << " out of power" << std::endl;
    return 0;
}

int Warrior::RangeAttack()
{
    if (getPower() > 10) {
        _power -= 10;
        std::cout << _name << " intercepts" << std::endl;
        Range = CLOSE;
        return 0;
    }
    std::cout << _name << " out of power" << std::endl;
    return 0;
}

void Warrior::Heal()
{
    setPv(_pv + 50);
    std::cout << _name << " takes a potion" << std::endl;
}

void Warrior::RestorePower()
{
    _power = 100;
    std::cout << _name << " eats" << std::endl; 
}

const std::string &Warrior::getWeaponName() const
{
    return _weaponName;
}
