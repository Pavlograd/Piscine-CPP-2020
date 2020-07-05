/*
** EPITECH PROJECT, 2020
** Droid
** File description:
** Droid
*/

#include "Droid.hpp"
#include <string>
#include <iostream>

Droid::Droid(std::string serial)
{
    Id = serial;
    std::cout << "Droid '" << Id << "' Activated" << std::endl;
}

Droid::Droid(const Droid &other)
{
    setId(other.Id);
    setEnergy(other.Energy);
    setStatus(other.Status);
    std::cout << "Droid '" << Id << "' Activated, Memory Dumped" << std::endl;
}


Droid::~Droid()
{
    std::cout << "Droid '" << Id << "' Destroyed" << std::endl;
}

std::string Droid::getId() const
{
    return Id;
}

void Droid::setId(std::string _id)
{
    Id = _id;
}

size_t Droid::getEnergy() const
{
    return Energy;
}

void Droid::setEnergy(size_t _energy)
{
    Energy = _energy;
    if (Energy > 100)
        Energy = 100;
}

size_t Droid::getAttack() const
{
    return Attack;
}

size_t Droid::getToughness() const
{
    return Toughness;
}

std::string Droid::getStatus() const
{
    return *Status;
}

void Droid::setStatus(std::string *_status)
{
    Status = _status;
}

void Droid::operator=(const Droid &droid)
{
    setId(droid.Id);
    setEnergy(droid.Energy);
    setStatus(droid.Status);
}

bool Droid::operator==(const Droid droid) const
{
    if (Id == droid.Id && Energy == droid.Energy && Status == droid.Status)
        return true;
    return false;
}

bool Droid::operator!=(const Droid droid) const
{
    if (Id == droid.Id && Energy == droid.Energy && Status == droid.Status)
        return false;
    return true;
}

void Droid::operator<<(size_t &_energy)
{
    size_t tmp = (Energy - 100) * -1;

    if (Energy != 100) {
        if (tmp > _energy) {
            Energy += _energy;
            _energy = 0;
        } else {
            _energy -= tmp;
            Energy = 100;
        }
    }
}

std::ostream &operator<<(std::ostream &os, const Droid &obj)
{
      os << "Droid '" << obj.getId() << "', " << obj.getStatus() <<", " << obj.getEnergy();
      return os;
}