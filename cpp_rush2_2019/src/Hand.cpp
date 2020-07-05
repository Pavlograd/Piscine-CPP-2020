/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#include "Hand.hpp"

Hand::Hand()
{
}

Hand::~Hand()
{
}

void Hand::PressIn(IConveyorBelt *_Conveyor)
{
    _Conveyor->in();
}

void Hand::PressOut(IConveyorBelt *_Conveyor)
{
    _Conveyor->out();
}

Object *Hand::getObject() const
{
    return _object;
}

void Hand::setObject(Object *object)
{
    _object = object;
}
