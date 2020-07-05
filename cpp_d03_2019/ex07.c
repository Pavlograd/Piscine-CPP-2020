/*
** EPITECH PROJECT, 2020
** ex07
** File description:
** ex07.c
*/

#include "string.h"

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    size_t tmp = 0;

    if (this->str == NULL || s == NULL)
        return 0;

    for (; tmp < n && pos < strlen(this->str); tmp++, pos++) {
        if (pos < strlen(this->str))
            s[tmp] = this->str[pos];
    }

    if (strlen(s) < n) {
        tmp++;
        s[tmp] = '\0';
    }

    return tmp;
}