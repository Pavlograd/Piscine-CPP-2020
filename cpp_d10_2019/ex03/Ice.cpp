/*
** EPITECH PROJECT, 2020
** Ice
** File description:
** Ice
*/

#include "Ice.hpp"

Ice::~Ice()
{
}

Ice *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    xp_ += 10;
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}