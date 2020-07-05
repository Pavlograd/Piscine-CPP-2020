/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#include "Box.hpp"

Box::Box(std::string const &name, std::string const &type)
    : Wrap(name, type)
{
}

Box::~Box()
{
}

void Box::wrapMeThat(Object *object)
{
    if (_Status == OPEN) {
        if (_Object == nullptr) {
            _Object = object;
            std::cout << "tuuuut tuuut tuut" << std::endl;
        } else
            std::cerr << "The Box already has an object." << std::endl;
    } else
        std::cerr << "The Box is already wrapped." << std::endl;
}