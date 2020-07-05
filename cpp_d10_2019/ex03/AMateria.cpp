/*
** EPITECH PROJECT, 2020
** AMateria
** File description:
** AMateria
*/

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type)
{
    Type = type;
    xp_ = 0;
}

AMateria::~AMateria()
{
}

const std::string &AMateria::getType() const
{
    return Type;
}

int AMateria::getXP() const
{
    return xp_;
}

void AMateria::use(ICharacter &target)
{
    xp_ += 10;
    target.use(0, target);
}