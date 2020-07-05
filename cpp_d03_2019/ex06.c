/*
** EPITECH PROJECT, 2020
** ex06
** File description:
** ex06.c
*/

#include "string.h"

int compare_s(const string_t *this, const string_t *str)
{
    return (strcmp(this->str, str->str));
}

int compare_c(const string_t *this, const char *str)
{
    return (strcmp(this->str, str));
}