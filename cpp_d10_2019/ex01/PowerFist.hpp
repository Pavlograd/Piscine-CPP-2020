/*
** EPITECH PROJECT, 2020
** PowerFist
** File description:
** PowerFist
*/

#ifndef PowerFist_
#define PowerFist_

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        ~PowerFist();
        void attack() const;
};

#endif /* !PowerFist_ */