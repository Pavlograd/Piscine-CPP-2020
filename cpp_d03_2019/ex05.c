/*
** EPITECH PROJECT, 2020
** ex05
** File description:
** ex05.c
*/

#include "string.h"

int size(const string_t *this)
{
    if (this->str == NULL)
        return -1;
    return strlen(this->str);
}