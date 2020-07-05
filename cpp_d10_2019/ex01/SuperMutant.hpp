/*
** EPITECH PROJECT, 2020
** SuperMutant
** File description:
** SuperMutant
*/

#ifndef SuperMutant_
#define SuperMutant_

#include <iostream>
#include "AEnemy.hpp"

class SuperMutant : public AEnemy
{
    public:
        SuperMutant();
        ~SuperMutant();
        void takeDamage(int damage);
};

#endif /* !SuperMutant_ */