/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __TEDDY_HPP__
# define __TEDDY_HPP__

# include <iostream>
# include "Toy.hpp"

class Teddy: public Toy
{
    public:
        Teddy(std::string const &name = "cuddles", std::string const &type = "teddy");
        ~Teddy();
        void isTaken() const;
};

#endif