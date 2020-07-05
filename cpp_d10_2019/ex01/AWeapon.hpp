/*
** EPITECH PROJECT, 2020
** AWeapon
** File description:
** AWeapon
*/

#ifndef AWeapon_
#define AWeapon_

#include <iostream>

class AWeapon
{
    public:
        AWeapon(const std::string &name, int apcost, int damage);
        ~AWeapon();
        std::string const &getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
    protected:
        std::string Name;
        int APCost;
        int Damage;
};

#endif /* !AWeapon_ */