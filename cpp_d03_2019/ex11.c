/*
** EPITECH PROJECT, 2020
** ex11
** File description:
** ex11.c
*/

#include "string.h"

void insert_c(string_t *this, size_t pos, const char *str)
{
    char *before = malloc(strlen(str) + 1 + strlen(this->str));
    char *after = malloc(strlen(str) + 1 + strlen(this->str));

    if (pos > strlen(this->str))
        append_c(this, str);
    else {
        strncpy(before, this->str, pos);
        strncpy(after, this->str + pos, strlen(this->str));
        strcat(before, str);
        strcat(before, after);
        assign_c(this, before);
    }
    free(before);
    free(after);
}

void insert_s(string_t *this, size_t pos, const string_t *str)
{
    char *before = malloc(strlen(str->str) + 1 + strlen(this->str));
    char *after = malloc(strlen(str->str) + 1 + strlen(this->str));

    if (pos > strlen(this->str))
        append_c(this, str->str);
    else {
        strncpy(before, this->str, pos);
        strncpy(after, this->str + pos, strlen(this->str));
        strcat(before, str->str);
        strcat(before, after);
        assign_c(this, before);
    }
    free(before);
    free(after);
}