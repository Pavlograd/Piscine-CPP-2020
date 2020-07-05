/*
** EPITECH PROJECT, 2020
** PapaXmasElf
** File description:
** PapaXmasElf
*/

#include "PapaXmasElf.hpp"

PapaXmasElf::PapaXmasElf()
{
    _Table = createTable();
    _Conveyor = createConveyorBelt();
}

PapaXmasElf::~PapaXmasElf()
{
    delete(_Table);
    delete(_Conveyor);
}

IElf *createElf()
{
    IElf *elf = new (PapaXmasElf);

    return elf;
}

void PapaXmasElf::takeTable(std::string const &name_obj)
{
    const std::string *lookResult = look();

    if (_Hand.getObject() != nullptr) {
        std::cerr << "My Hands are busy." << std::endl;
        delete[] lookResult;
        return;
    }
    for (int i = 0; !lookResult[i].empty(); i++) {
        if (lookResult[i].compare(name_obj) == 0) {
            _Hand.setObject(_Table->take(i));
            _Hand.getObject()->isTaken();
            delete[] lookResult;
            return;
        }
    }
    delete[] lookResult;
    std::cerr << "The object you are looking for is not here." << std::endl;
}

void PapaXmasElf::putTable()
{
    if (_Hand.getObject() == nullptr) {
        std::cerr << "I've nothing in my hand..." << std::endl;
        return;
    }
    _Table->put(_Hand.getObject());
    _Hand.setObject(nullptr);
}

void PapaXmasElf::takeConveyor()
{
    if (_Hand.getObject() == nullptr) {
        _Hand.setObject(_Conveyor->take());
        if ((_Hand.getObject())->getType() == "box" || (_Hand.getObject())->getType() == "giftpaper")
                std::cout << "whistles while working";
        return;
    }
    std::cerr << "My hands are busy !" << std::endl;
}

void PapaXmasElf::putConveyor()
{
    if (_Hand.getObject() == nullptr) {
        std::cerr << "I've nothing in my hand..." << std::endl;
        return;
    }
    if (_Conveyor->take() != nullptr) {
        std::cerr << "There something on the conveyor" << std::endl;
        return;
    }
    _Conveyor->put(_Hand.getObject());
    _Hand.setObject(nullptr);
}

const std::string *PapaXmasElf::look() const
{
    return _Table->look();
}

void PapaXmasElf::PressButton(const std::string *button)
{
    if (button->compare("IN") == 0)
        _Hand.PressIn(_Conveyor);
    if (button->compare("OUT") == 0)
        _Hand.PressOut(_Conveyor);
}