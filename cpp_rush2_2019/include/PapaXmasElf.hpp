/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __PAPAXMASELF_HPP__
#define __PAPAXMASELF_HPP__

#include <iostream>
#include "IElf.hpp"
#include "Hand.hpp"

class PapaXmasElf : public IElf {
	public:
		PapaXmasElf();
		~PapaXmasElf();
        void takeTable(std::string const &name_obj);
        void putTable();
        void takeConveyor();
        void putConveyor();
        const std::string *look() const;
        void PressButton(const std::string *button);
    protected:
    private:
        ITable *_Table;
        IConveyorBelt *_Conveyor;
        Hand _Hand;
};

IElf *createElf();

#endif