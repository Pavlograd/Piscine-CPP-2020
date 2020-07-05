/*
** EPITECH PROJECT, 2020
** Cure
** File description:
** Cure
*/

#ifndef Cure_
#define Cure_

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure() : AMateria("cure") {}
        ~Cure();
        Cure *clone() const;
        void use(ICharacter &target);
    private:
        std::string Type = "cure";
        unsigned int xp_ = 0;
};

#endif /* !Cure_ */
