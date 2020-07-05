/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __LITTLEPONY_HPP__
# define __LITTLEPONY_HPP__

# include <iostream>
# include "Toy.hpp"

class LittlePony: public Toy
{
    public:
        LittlePony(std::string const &name = "happy pony", std::string const &type = "pony");
        ~LittlePony();
        void isTaken() const;
};

#endif