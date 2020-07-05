/*
** EPITECH PROJECT, 2020
** Cure
** File description:
** Cure
*/

#include "Cure.hpp"

Cure::~Cure()
{
}

Cure *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    xp_ += 10;
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}