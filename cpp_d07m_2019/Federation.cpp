/*
** EPITECH PROJECT, 2020
** Federation
** File description:
** Federation
*/

#include "Federation.hpp"

namespace Federation {
    namespace Starfleet {
        Ship::Ship()
        {
            _length = 289;
            _width = 132;
            _name = "Entreprise";
            _maxWarp = 6;
            _home = EARTH;
            _location = _home;
            _shield = 100;
            _photonTorpedo = 0;
            std::cout << "The ship USS " << _name << " has been finished." << std::endl;
            std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
            std::cout << "It can go to Warp " << _maxWarp << "!" << std::endl;
        }

        Ship::Ship(int length, int width, std::string name, short maxWarp)
        {
            _length = length;
            _width = width;
            _name = name;
            _maxWarp = maxWarp;
            _home = EARTH;
            _location = _home;
            _shield = 100;
            _photonTorpedo = 0;

            std::cout << "The ship USS " << _name << " has been finished.\nIt is " << _length << " m in length and " << _width << " m in width.\nIt can go to Warp " << _maxWarp << "!" << std::endl;
        }

        Ship::Ship(int length, int width, std::string name, short maxWarp ,int torpedo = 0)
        {
            _length = length;
            _width = width;
            _name = name;
            _maxWarp = maxWarp;
            _home = EARTH;
            _location = _home;
            _shield = 100;
            _photonTorpedo = torpedo;

            std::cout << "The ship USS " << _name << " has been finished." << std::endl;
            std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
            std::cout << "It can go to Warp " << _maxWarp << "!" << std::endl;
            if (torpedo != 0)
                std::cout << "Weapons are set: " << _photonTorpedo << " torpedoes ready." << std::endl;
        }

        Ship::~Ship()
        {
        }

        void Ship::setupCore(WarpSystem::Core *core)
        {
            _core = core;

            std::cout << "USS " << _name << ": The core is set." << std::endl;
        }

        void Ship::checkCore()
        {
            WarpSystem::QuantumReactor *Reactor = _core->checkReactor();

            if (Reactor->isStable())
                std::cout << "USS " << _name << ": The core is stable at the time." << std::endl;
            else
                std::cout << "USS " << _name << ": The core is unstable at the time." << std::endl;
        }

        void  Ship::promote(Captain *captain)
        {
            _captain = captain;
            std::cout <<  _captain->getName() << ": I'm glad to be the captain of the USS " << _name << "." << std::endl;
        }

        Captain::Captain(std::string name)
        {
            _name = name;
        }

        Captain::~Captain()
        {
        }

        std::string Captain::getName ()
        {
            return _name;
        }

        int Captain::getAge()
        {
            return _age;
        }

        void Captain::setAge(int age)
        {
            _age = age;
        }

        Ensign::Ensign(std::string name)
        {
            _name = name;
            std::cout << "Ensign " << _name << ", awaiting orders." << std::endl;
        }
        
        Ensign::~Ensign()
        {
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
        int Ship::getTorpedo()
        {
            return _photonTorpedo;
        }
        void Ship::setTorpedo(int torpedo)
        {
            _photonTorpedo = torpedo;
        }
        void Ship::fire(Borg::Ship *target)
        {
            if (_photonTorpedo == 0) {
                std::cout << _name << ": No enough torpedoes to fire, " << _captain->getName() << "!" << std::endl;
                return;
            }
            _photonTorpedo--;
            std::cout << _name << ": Firing on target. " << _photonTorpedo << " torpedoes remaining." << std::endl;
            if (_photonTorpedo == 0)
                std::cout << _name << ": No more torpedo to fire, " << _captain->getName() << "!" << std::endl;
            target->setShield(target->getShield() - 50);
        }
        void Ship::fire(int torpedoes, Borg::Ship *target)
        {
            if (_photonTorpedo < torpedoes) {
                std::cout << _name << ": No enough torpedoes to fire, " << _captain->getName() << "!" << std::endl;
                return;
            }
            _photonTorpedo -= torpedoes;
            std::cout << _name << ": Firing on target. " << _photonTorpedo << " torpedoes remaining." << std::endl;
            if (_photonTorpedo == 0)
                std::cout << _name << ": No more torpedo to fire, " << _captain->getName() << "!" << std::endl;
            target->setShield(target->getShield() - (50 * torpedoes));
        }
    }
    Ship::Ship(int length, int width, std::string name)
    {
        _length = length;
        _width = width;
        _name = name;
        _maxWarp = 1;
        _home = VULCAN;
        _location = _home;
        std::cout << "The independent ship " << _name << " just finished its construction.\nIt is " << _length << " m in length and " << _width << " m in width."  << std::endl;
    }
    Ship::~Ship()
    {
    }
    void Ship::setupCore(WarpSystem::Core *core)
    {
        _core = core;

        std::cout << _name << ": The core is set." << std::endl;
    }
    void Ship::checkCore()
    {
        WarpSystem::QuantumReactor *Reactor = _core->checkReactor();

        if (Reactor->isStable())
            std::cout << _name << ": The core is stable at the time." << std::endl;
        else
            std::cout << _name << ": The core is unstable at the time." << std::endl;
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
    WarpSystem::Core *Ship::getCore()
    {
        return _core;
    }
}