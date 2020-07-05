/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#include "PapaXmasTable.hpp"

PapaXmasTable::PapaXmasTable() : ITable()
{
    _array[0] = nullptr;
}

std::string *PapaXmasTable::look()
{
    std::string *arrayTitle = new std::string[11];
    int i = 0;

    for (; _array[i] != NULL; i++)
        arrayTitle[i] = _array[i]->getType();
    arrayTitle[i] = "";
    return arrayTitle;
}

ITable *createTable()
{
    ITable *table = new (PapaXmasTable);

    return table;
}

Object *PapaXmasTable::take(int place)
{
    int i = place;

    this->_object = this->_array[place];
    while (i != 9) {
        this->_array[i] = this->_array[i + 1];
        i++;
    }
    this->_array[10] = NULL;
    return _object;
}

void PapaXmasTable::put(Object *object)
{
    int i = 0;

    if (this->_array[9] != NULL)
        std::cerr << "To much object on the table" << std::endl;
    else {
        while (this->_array[i] != NULL)
            i++;
        this->_array[i] = object;
    }
}

PapaXmasTable::~PapaXmasTable()
{
}