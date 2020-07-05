/*
** EPITECH PROJECT, 2020
** ex03
** File description:
** ex03.c
*/

#include "string.h"

char at(const string_t *this, size_t pos)
{
    if (pos < 0 || this->str == NULL || strlen(this->str) - 1 < pos)
        return -1;
    return (this->str[pos]);
}