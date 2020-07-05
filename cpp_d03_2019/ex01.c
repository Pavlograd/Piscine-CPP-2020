/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** ex01.c
*/

#include "string.h"

void assign_s(string_t *this, const string_t *str)
{
    string_destroy(this);

    if (str->str == NULL)
        return;
    this->str = strdup(str->str);
}

void assign_c(string_t *this, const char *s)
{
    string_destroy(this);

    if (s == NULL)
        return;
    this->str = strdup(s);
}