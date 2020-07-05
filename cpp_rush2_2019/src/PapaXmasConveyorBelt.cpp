/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#include "PapaXmasConveyorBelt.hpp"

PapaXmasConveyorBelt::PapaXmasConveyorBelt() : IConveyorBelt()
{
}

IConveyorBelt *createConveyorBelt()
{
    IConveyorBelt *conveyorbelt = new (PapaXmasConveyorBelt);

    return conveyorbelt;
}

void PapaXmasConveyorBelt::in()
{
    int i = rand() % 2;

    if (_object != nullptr) {
        std::cerr << "You have to empty the ConveyorBelt before." << std::endl;
        return;
    }
    if (i == 0)
        _object = new Box;
    else
        _object = new GiftPaper;
}

void PapaXmasConveyorBelt::out()
{
    if (_object != nullptr)
        _object->~Object();
    else
        std::cerr << "You just send nothing to Santa! He'll be furious!" << std::endl;
}

void PapaXmasConveyorBelt::put(Object *object) 
{
    if (_object != nullptr)
        _object = object;
    else
        std::cerr << "There is something on the ConveyorBelt." << std::endl;
}

Object *PapaXmasConveyorBelt::take()
{
    _object = nullptr;
    return _object;
}

PapaXmasConveyorBelt::~PapaXmasConveyorBelt()
{
}