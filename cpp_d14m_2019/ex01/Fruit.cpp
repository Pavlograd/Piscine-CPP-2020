/*
** EPITECH PROJECT, 2020
** Fruit
** File description:
** Fruit
*/

#include "Fruit.hpp"

Fruit::~Fruit()
{
}

const std::string &Fruit::getName() const
{
    return _name;
}

int Fruit::getVitamins() const
{
    return _vitamins;
}

Fruit &Fruit::operator=(const Fruit &copy)
{
    _vitamins = copy.getVitamins();
    _name = copy.getName();
    return *this;
}