/*
** EPITECH PROJECT, 2020
** Character
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name)
{
    Name = name;
}

Character::~Character()
{
    for (int i = 0; i < Idx; i++)
        M[i]->~AMateria();
}

std::string const &Character::getName() const
{
    return Name;
}

void Character::equip(AMateria *m)
{
    if (Idx == 4)
        return;
    M[Idx] = m;
    Idx++;
}

void Character::unequip(int idx)
{
    if (idx >= Idx)
        return;
    for (int i = idx; i < Idx + 1; i++) {
        if (i == Idx - 1)
            M[i] = NULL;
        else
            M[i] = M[i + 1];
    }
    Idx--;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= Idx)
        return;
    M[idx]->use(target);
}