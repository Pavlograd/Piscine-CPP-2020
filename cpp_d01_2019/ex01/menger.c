/*
** EPITECH PROJECT, 2020
** ex01 cpp
** File description:
** main.c
*/

#include <ctype.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>
#include "menger.h"

int is_power(int x, long int y, int nb_levels)
{
    long int power = 1;
    if (x == 1)
        return (y == 1);
    while (power < y)
        power *= x;
    if ( y < pow(3, nb_levels) )
        return 0;
    return (power == y);
}

int get_sqrt_square(int size_square, int level)
{
    double result = size_square;

    for (int i = 0; i <= level; i++) {
        result /= 3;
    }
    if ( result > 999 ) {
        exit(84);
    }
    return result;
}