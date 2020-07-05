/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#include "TableRand.hpp"

TableRand::TableRand()
{
    //int i = rand() % 4;
    int j = 0;

    for (; j < 10; j++) {
        _object[j] = nullptr;
    }
    _object[j] = nullptr;
}

TableRand::~TableRand()
{
    for (int i = 0; i < 10; i++) {
      if (_object[i] != nullptr)
        delete(_object[i]);
    }
}