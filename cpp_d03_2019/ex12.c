/*
** EPITECH PROJECT, 2020
** ex12
** File description:
** ex12.c
*/

#include "string.h"

int to_int(const string_t *this)
{
    return atoi(this->str);
}