/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __TOY_HPP__
# define __TOY_HPP__

# include <iostream>
# include "Object.hpp"

class Toy : public Object
{
    public:
        Toy(const std::string &name, std::string const &type);
        virtual ~Toy();
};

#endif