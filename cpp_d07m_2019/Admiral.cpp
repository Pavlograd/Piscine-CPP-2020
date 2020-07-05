/*
** EPITECH PROJECT, 2020
** Admiral
** File description:
** Admiral
*/

#include "Admiral.hpp"

namespace Federation {
    namespace Starfleet {
        Admiral::Admiral(std::string name)
        {
            _name = name;
            movePtr = &Federation::Starfleet::Ship::move;
            firePtr = &Federation::Starfleet::Ship::fire;
            std::cout << "Admiral " << _name << " ready for action." << std::endl;
        }

        Admiral::~Admiral()
        {

        }

        void Admiral::fire(Federation::Starfleet::Ship *ship, Borg::Ship *target)
        {
            std::cout << "On order from Admiral " << _name << ":" << std::endl;
            (ship->*(firePtr))(target);
        }

        bool Admiral::move(Federation::Starfleet::Ship *ship, Destination  dest)
        {
            if ((ship->*(movePtr))(dest))
                return true;
            return false;
        }
    }
}