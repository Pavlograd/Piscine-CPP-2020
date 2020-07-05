/*
** EPITECH PROJECT, 2020
** ex109
** File description:
** ex10.c
*/

#include "string.h"

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    char *tmp;

    if (pos < 0 || strlen(str->str) - pos > strlen(this->str))
        return -1;
    tmp = malloc(strlen(str->str) + 1);
    for (; pos < strlen(this->str); pos++) {
        for (int i = pos, j = 0; i < pos + strlen(str->str); i++, j++) {
            if (i < strlen(this->str))
                tmp[j] = this->str[i];
            else
                return -1;
        }
        if (strcmp(tmp, str->str) == 0)
            break;
    }
    return pos;
}

int find_c(const string_t *this, const char *str, size_t pos)
{
    char *tmp;

    if (pos < 0 || strlen(str) - pos > strlen(this->str))
        return -1;
    tmp = malloc(strlen(str) + 1);
    for (; pos < strlen(this->str); pos++) {
        for (int i = pos, j = 0; i < pos + strlen(str); i++, j++) {
            if (i < strlen(this->str))
                tmp[j] = this->str[i];
            else
                return -1;
        }
        if (strcmp(tmp, str) == 0)
            break;
    }
    return pos;
}