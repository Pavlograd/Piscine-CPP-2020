#ifndef __MateriaSOURCE_HH__
#define __MateriaSOURCE_HH__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource();
    ~MateriaSource();
    AMateria *createMateria(std::string const & type);
    void learnMateria(AMateria *);
    private:
        int Idx = 0;
        AMateria *M[];
};

#endif

