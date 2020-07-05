/*
** EPITECH PROJECT, 2020
** ex09
** File description:
** ex09.c
*/

#include "string.h"

int empty(const string_t *this)
{
    if (strcmp(this->str, "") == 0)
        return 1;
    return 0;
}