/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#include "Teddy.hpp"

Teddy::Teddy(std::string const &name, std::string const &type) : Toy(name, type)
{
}

Teddy::~Teddy()
{
}

void Teddy::isTaken() const
{
    std::cout << "gra hu" << std::endl;
}