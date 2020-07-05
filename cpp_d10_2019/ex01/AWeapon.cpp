/*
** EPITECH PROJECT, 2020
** AWeapon
** File description:
** AWeapon
*/

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
{
    Name = name;
    APCost = apcost;
    Damage = damage;
}

AWeapon::~AWeapon()
{
}

std::string const &AWeapon::getName() const
{
    return Name;
}

int AWeapon::getAPCost() const
{
    return APCost;
}

int AWeapon::getDamage() const
{
    return Damage;
}