/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#include "GiftPaper.hpp"

GiftPaper::GiftPaper(std::string const &name, std::string const &type): Wrap(name, type)
{
}

GiftPaper::~GiftPaper()
{
}

void GiftPaper::wrapMeThat(Object *object)
{
    if (_Object == nullptr) {
        _Object = object;
        std::cout << "tuuuut tuuut tuut" << std::endl;
    } else
        std::cerr << "The GiftPaper already has an object." << std::endl;
}