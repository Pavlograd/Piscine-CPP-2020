/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __PAPAXMASCONVEYORBELT_HPP__
#define __PAPAXMASCONVEYORBELT_HPP__

#include <iostream>
#include "IConveyorBelt.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

class PapaXmasConveyorBelt : public IConveyorBelt
{
    public:
        PapaXmasConveyorBelt();
		~PapaXmasConveyorBelt();
        void in();
        void out();
        void put(Object *object);
        Object *take();
	protected:
        Object *_object = nullptr;
};

IConveyorBelt *createConveyorBelt();

#endif