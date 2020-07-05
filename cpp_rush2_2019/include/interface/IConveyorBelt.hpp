/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __ICONVEYORBELT_HPP__
# define __ICONVEYORBELT_HPP__

# include <iostream>
# include "Object.hpp"

class IConveyorBelt
{
    public:
        virtual void in() = 0;
        virtual void out() = 0;
        virtual void put(Object *object) = 0;
        virtual Object *take() = 0;
		virtual ~IConveyorBelt() {};
};

#endif
