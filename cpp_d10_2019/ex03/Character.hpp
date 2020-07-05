#ifndef __Character_HH__
#define __Character_HH__

#include <string>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    public:
        Character(const std::string &name);
        ~Character();
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    private:
        int Idx = 0;
        std::string Name;
        AMateria *M[];
};

#endif
