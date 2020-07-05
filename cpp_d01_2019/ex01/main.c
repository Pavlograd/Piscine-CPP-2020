/*
** EPITECH PROJECT, 2020
** ex01 cpp
** File description:
** main.c
*/

#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>

#include <stdio.h>
#include <math.h>

#include "menger.h"

void print_values(int sqrt_square, int abcisse, int ordo)
{
    if (sqrt_square < 10) {
            printf("%s%d%c", "00", sqrt_square, ' ');
    } else if (sqrt_square < 100) {
        printf("%c%d%c", '0', sqrt_square, ' ');
    } else
        printf("%d%c", sqrt_square, ' ');
    if (abcisse < 10) {
            printf("%s%d%c", "00", abcisse, ' ');
    } else if (abcisse < 100) {
        printf("%c%d%c", '0', abcisse, ' ');
    } else
        printf("%d%c", abcisse, ' ');
    if (ordo < 10) {
            printf("%s%d\n", "00", ordo);
    } else if (ordo < 100) {
        printf("%c%d\n", '0', ordo);
    } else
        printf("%d\n", ordo);
}

int if_zero(int *abcisse, int ordo, int sqrt_square, int *array)
{
    array[0] = *abcisse + (sqrt_square * 2);
    array[1] = ordo + (sqrt_square * 2);

    if (*abcisse == sqrt_square) {
        *abcisse = sqrt_square / 3;
    } else
        *abcisse -= sqrt_square - 1;
    if (ordo == sqrt_square) {
        return (sqrt_square/3);
    } else
        return (ordo - (sqrt_square - 1));
}

int get_ordo(int *abcisse, int ordo, int sqrt_square, int *array)
{
    int a = array[0] - (sqrt_square * 2);
    int b = array[1] - (sqrt_square * 2);

    if ( array[2] == 0 ) {
        return (if_zero(abcisse, ordo, sqrt_square, array));
    }
    if ( ordo < array[1])
        ordo += sqrt_square;
    if ( ordo > array[1]) {
        ordo = array[1] - (sqrt_square * 2) - 2;
        if ( sqrt_square == 9)
            ordo = 3;
        *abcisse += sqrt_square;
    }
    if (((*abcisse> a) && ((*abcisse<(a+sqrt_square))))
        && ((ordo>b)) && ((ordo<(b+sqrt_square))))
        return (get_ordo(abcisse, ordo, sqrt_square, array));
    return ordo;
}

void menger(int size_square, int nb_levels, int abcisse, int ordo)
{
    int old_val[3] = { abcisse, ordo, 0 };

    print_values(size_square, abcisse, ordo);
    if (nb_levels == 1)
        return;
    for (int i = 0; i < 8; i++) {
        old_val[2] = i;
        ordo = get_ordo(&abcisse, ordo, size_square, old_val);
        menger(size_square/3, nb_levels-1, abcisse, ordo);
    }
    return;
}

int main(int argc, char **argv)
{
    int size_square;
    int nb_levels;
    char * endPtr;

    if ( argc != 3 )
        return 84;
    nb_levels = strtol( argv[2], &endPtr, 10 );
    if ( endPtr == argv[2] || nb_levels <= 0 ) {
        return 84;
    }
    size_square = strtol( argv[1], &endPtr, 10 );
    if ( endPtr == argv[1] || size_square <= 0 ||
        (is_power(3, size_square, nb_levels)) != 1 )
        return 84;
    menger(size_square/3, nb_levels, size_square/3, size_square/3);
    return 0;
}