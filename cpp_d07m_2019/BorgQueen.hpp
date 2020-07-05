/*
** EPITECH PROJECT, 2020
** BorgQueen
** File description:
** BorgQueen
*/

#ifndef BorgQueen_
#define BorgQueen_

#include <iostream>
#include "Federation.hpp"
#include "Borg.hpp"

namespace Borg {
    class BorgQueen
    {
        public:
            BorgQueen();
            ~BorgQueen();
            bool (Borg::Ship:: *movePtr)(Destination dest);
            void (Borg::Ship:: *firePtr)(Federation::Starfleet::Ship *target);
            void (Borg::Ship:: *destroyPtr)(Federation::Ship *target);
            bool move(Borg::Ship *ship, Destination dest);
            void fire(Borg::Ship *ship, Federation::Starfleet::Ship *target);
            void destroy(Borg::Ship *ship, Federation::Ship *target);
        protected:
        private:
    };
}

#endif /* !BorgQueen_ */