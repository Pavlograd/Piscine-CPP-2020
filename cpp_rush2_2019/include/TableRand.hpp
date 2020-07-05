/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __TABLERAND_HPP__
# define __TABLERAND_HPP__

# include <iostream>
# include "Object.hpp"

class TableRand
{
    public:
        TableRand();
        virtual ~TableRand();
    private:
        Object *_object[11];
};

#endif