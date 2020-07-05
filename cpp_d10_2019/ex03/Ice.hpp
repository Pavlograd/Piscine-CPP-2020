/*
** EPITECH PROJECT, 2020
** Ice
** File description:
** Ice
*/

#ifndef Ice_
#define Ice_

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice() : AMateria("ice") {}
        ~Ice();
        Ice *clone() const;
        void use(ICharacter &target);
    private:
        std::string Type = "ice";
        unsigned int xp_ = 0;
};

#endif /* !Ice_ */
