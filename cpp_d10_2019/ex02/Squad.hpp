#ifndef __Squad_HH__
#define __Squad_HH__

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include <iostream>
#include <list>
#include <string>

class Squad : public ISquad
{
    public:
        Squad() {}
        Squad(const Squad &);
        ~Squad();
        int getCount() const;
        ISpaceMarine* getUnit(int);
        int push(ISpaceMarine*);
        Squad &operator=(const Squad &old);
    private:
        int Count = 0;
        ISpaceMarine *Marine[];
};

#endif

