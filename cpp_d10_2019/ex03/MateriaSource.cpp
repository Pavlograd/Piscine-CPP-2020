/*
** EPITECH PROJECT, 2020
** Materia
** File description:
** Materia
*/

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < Idx; i++)
        M[i]->~AMateria();
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < Idx; i++) {
        if ((M[i]->getType()).compare(type) == 0)
            return M[i]->clone();
    }
    return NULL;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (Idx == 4)
        return;
    M[Idx] = m->clone();
    Idx++;
}