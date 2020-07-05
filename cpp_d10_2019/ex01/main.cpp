/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "AEnemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
    const auto preda = new Character("Predator");
    const auto prey = new RadScorpion();
    std::cout << *preda;
    AWeapon *pr(new PlasmaRifle());
    AWeapon *pf(new PowerFist());
    preda->equip(pr);
    std::cout << *preda;
    preda->equip(pf);
    preda->attack(prey);
    std::cout << *preda;
    preda->equip(pr);
    std::cout << *preda;
    preda->attack(prey);
    std::cout << *preda;
    preda->attack(prey);
    std::cout << *preda;
    return 0;
}