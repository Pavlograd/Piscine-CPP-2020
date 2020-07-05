/*
** EPITECH PROJECT, 2020
** Squad
** File description:
** Squad
*/

#include "Squad.hpp"

Squad::Squad(const Squad &copy)
{
    Count = copy.Count;
    for (int i = 0; i < Count; i++)
        Marine[i] = copy.Marine[i]->clone();
}

Squad::~Squad()
{
    for (int i = 0; i < Count; i++)
        Marine[i]->~ISpaceMarine();
}

int Squad::getCount() const
{
    return Count;
}

ISpaceMarine *Squad::getUnit(int unit)
{
    if (unit > Count)
        return NULL;
    return Marine[unit];
}

int Squad::push(ISpaceMarine *recrut)
{
    if (recrut == NULL)
        return Count;
    for (int i = 0; i < Count; i++) {
        if (recrut == Marine[i])
            return Count;
    }
    Marine[Count] = recrut;
    Count++;
    return Count;
}

Squad &Squad::operator=(const Squad &old)
{
    for (int i = 0; i < Count; i++)
        Marine[i]->~ISpaceMarine();
    Count = old.Count;
    for (int i = 0; i < Count; i++)
        Marine[i] = old.Marine[i]->clone();
    return *this;
}
