/*
** EPITECH PROJECT, 2020
** Admiral
** File description:
** Admiral
*/

#ifndef Admiral_
#define Admiral_

#include <iostream>
#include "Federation.hpp"

namespace Federation {
    namespace Starfleet {
        class Admiral
        {
            public:
                Admiral(std::string name);
                ~Admiral();
                bool (Federation::Starfleet::Ship:: *movePtr)(Destination dest);
                void (Federation::Starfleet::Ship:: *firePtr)(Borg::Ship *target);
                void fire(Federation::Starfleet::Ship *ship, Borg::Ship *target);
                bool move(Federation::Starfleet::Ship *ship, Destination  dest);
            protected:
            private:
            std::string _name;
        };
    }
}

#endif /* !Admiral_ */
