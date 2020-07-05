/*
** EPITECH PROJECT, 2020
** AMateria
** File description:
** AMateria
*/

#ifndef AMateria_
#define AMateria_

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
    public:
        AMateria(const std::string &type);
        virtual ~AMateria();
        const std::string &getType() const; // Returns  the  materia  typeunsigned
        int getXP() const;                  // Returns  the  Materia's XP
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
    private:
        std::string Type;
        unsigned int xp_;
};

#endif /* !AMateria_ */
