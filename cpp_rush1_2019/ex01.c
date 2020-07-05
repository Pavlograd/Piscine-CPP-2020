/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 01
*/

#include "new.h"
#include "player.h"

int main(void)
{
    Object *player = new(Player);

    printf("%d\n", memcmp(player, Player, Player->__size__));
    delete (player);
    return (0);
}
