/*
** EPITECH PROJECT, 2020
** Character
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name)
{
    Name = name;
}

Character::~Character()
{
}

void Character::recoverAP()
{
    AP += 10;
    if (AP > 40)
        AP = 40;
}

void Character::equip(AWeapon *weapon)
{
    Weapon = weapon;
}

void Character::attack(AEnemy *enemy)
{
    if (Weapon == NULL || AP < Weapon->getAPCost())
        return;
    enemy->takeDamage(Weapon->getDamage());
    AP -= Weapon->getAPCost();
    std::cout << Name << " attacks " << enemy->getType() << " with a " << Weapon->getName() << std::endl;
    Weapon->attack();
    if (enemy->getHP() <= 0)
    enemy->~AEnemy();
}

std::string const &Character::getName() const
{
    return Name;
}

int Character::getAP() const
{
    return AP;
}

std::string const &Character::getWeaponName() const
{
    return Weapon->getName();
}

AWeapon *Character::getWeapon() const
{
    return Weapon;
}

std::ostream &operator<<(std::ostream &os, const Character &obj)
{
    if (obj.getWeapon() != NULL)
        os << obj.getName() << " has " << obj.getAP() << " AP and wields a " << obj.getWeaponName() << std::endl;
    else
        os << obj.getName() << " has " << obj.getAP() << " AP and is unarmed" << std::endl;
    return os;
}