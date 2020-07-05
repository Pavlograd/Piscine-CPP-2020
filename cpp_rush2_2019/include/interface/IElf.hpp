/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __IELF_HPP__
# define __IELF_HPP__

#include <iostream>
#include "ITable.hpp"
#include "IConveyorBelt.hpp"
#include "PapaXmasConveyorBelt.hpp"
#include "PapaXmasTable.hpp"
#include "Hand.hpp"

class IElf
{
    public:
        virtual ~IElf() {};
        virtual void takeTable(std::string const &name_obj) = 0;
        virtual void putTable() = 0;
        virtual void takeConveyor() = 0;
        virtual void putConveyor() = 0;
        virtual const std::string *look() const = 0;
        virtual void PressButton(const std::string *button) = 0;
};

#endif
