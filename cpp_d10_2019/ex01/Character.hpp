/*
** EPITECH PROJECT, 2020
** Character
** File description:
** Character
*/

#ifndef Character_
#define Character_

#include <iostream>
#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character
{
    public:
        Character(const std::string &name);
        ~Character();
        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(AEnemy *enemy);
        int getAP() const;
        std::string const &getWeaponName() const;
        std::string const &getName() const;
        AWeapon *getWeapon() const;
    private:
        std::string Name;
        int AP = 40;
        AWeapon *Weapon = NULL;
};

std::ostream &operator<<(std::ostream &os, const Character &obj);

#endif /* !Character_ */