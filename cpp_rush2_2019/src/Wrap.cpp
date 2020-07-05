/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#include "Wrap.hpp"

Wrap::Wrap(std::string const &name, std::string const &type)
    : Object(name, type)
{
}

Wrap::~Wrap()
{
}

void Wrap::closeMe()
{
    _Status = CLOSE;
}

void Wrap::openMe()
{
    _Status = OPEN;
}

Object *Wrap::getObject() const
{
    if (_Status == OPEN)
        return _Object;
    std::cerr << "Please open the box before." << std::endl;
    return nullptr;
}

void Wrap::isTaken() const
{
    std::cout << "whistles while working" << std::endl;
}