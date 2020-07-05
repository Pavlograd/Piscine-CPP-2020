/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#include "LittlePony.hpp"

LittlePony::LittlePony(std::string const &name, std::string const &type): Toy(name, type)
{
}

LittlePony::~LittlePony()
{
}

void LittlePony::isTaken() const
{
    std::cout << "yo man" << std::endl;
}