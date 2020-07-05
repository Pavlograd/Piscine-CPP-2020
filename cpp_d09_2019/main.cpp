/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "Character.hpp"
#include "Warrior.hpp"
#include "Mage.hpp"
#include "Priest.hpp"

int main()
{
    Character c("poney", 42);
    Warrior w("Penis Volant", 10);
    Mage m("Gandalf", 102);
    Priest p("Sarouman", 98);

    c.TakeDamage(50);
    c.TakeDamage(200);
    c.TakeDamage(200);

    c.Range = Character::CLOSE;
    c.Range = Character::RANGE;
}