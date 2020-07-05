/*
** EPITECH PROJECT, 2020
** Borg
** File description:
** Borg
*/

#include "Borg.hpp"

namespace Borg {
    Ship::Ship()
    {
        _side = 300;
        _maxWarp = 9;
        _home = UNICOMPLEX;
        _location = _home;
        _shield = 100;
        _repair = 3;

        std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl;
        std::cout << "Your biological characteristics and technologies will be assimilated." << std::endl;
        std::cout << "Resistance is futile." << std::endl;
    }

    Ship::Ship(int weaponFrequency)
    {
        _side = 300;
        _maxWarp = 9;
        _home = UNICOMPLEX;
        _location = _home;
        _shield = 100;
        _weaponFrequency = weaponFrequency;
        _repair = 3;

        std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl;
        std::cout << "Your biological characteristics and technologies will be assimilated." << std::endl;
        std::cout << "Resistance is futile." << std::endl;
    }

    Ship::Ship(int weaponFrequency, short repair)
    {
        _side = 300;
        _maxWarp = 9;
        _home = UNICOMPLEX;
        _location = _home;
        _shield = 100;
        _weaponFrequency = weaponFrequency;
        _repair = repair;

        std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl;
        std::cout << "Your biological characteristics and technologies will be assimilated." << std::endl;
        std::cout << "Resistance is futile." << std::endl;
    }

    Ship::~Ship()
    {
    }

    void Ship::setupCore(WarpSystem::Core *core)
    {
        _core = core;
    }

    void Ship::checkCore()
    {
        WarpSystem::QuantumReactor *Reactor = _core->checkReactor();

        if (Reactor->isStable())
            std::cout << "Everything is in order." << std::endl;
        else
            std::cout << "Critical failure imminent." << std::endl;
    }

    bool Ship::move(int warp, Destination d)
    {
        if (warp > _maxWarp || d == _location || (_core->checkReactor())->isStable() == false)
            return false;
        _location = d;
        return true;
    }

    bool Ship::move(int warp)
    {
        if (warp > _maxWarp || (_core->checkReactor())->isStable() == false)
            return false;
        _location = _home;
        return true;
    }

    bool Ship::move(Destination d)
    {
        if (d == _location || (_core->checkReactor())->isStable() == false)
            return false;
        _location = d;
        return true;
    }

    bool Ship::move()
    {
        if ((_core->checkReactor())->isStable() == false)
            return false;
        _location = _home;
        return true;
    }

    int Ship::getShield()
    {
        return _shield;
    }

    void Ship::setShield(int shield)
    {
        _shield = shield;
    }

    int Ship::getWeaponFrequency()
    {
        return _weaponFrequency;
    }

    void Ship::setWeaponFrequency(int frequency)
    {
        _weaponFrequency = frequency;
    }

    short Ship::getRepair()
    {
        return _repair;
    }

    void Ship::setRepair(short repair)
    {
        _repair = repair;
    }

    void Ship::fire(Federation::Starfleet::Ship *target)
    {
        target->setShield(target->getShield() - _weaponFrequency);
        std::cout << "Firing on target with " << _weaponFrequency << "GW frequency." << std::endl;
    }

    void Ship::fire(Federation::Ship *target)
    {
        ((target->getCore())->checkReactor())->setStability(false);
        std::cout << "Firing on target with " << _weaponFrequency << "GW frequency." << std::endl;
    }

    void Ship::repair()
    {
        if (_repair > 0) {
            setRepair(_repair - 1);
            setShield(100);
            std::cout << "Begin shield re-initialisation.. Done. Awaiting further instructions." << std::endl;
        }
        std::cout << "Energy cells depleted, shield weakening." << std::endl;
    }
}