/*
** EPITECH PROJECT, 2020
** ex13
** File description:
** ex13.c
*/

#include "string.h"

string_t **split_s(const string_t *this, char separator)
{
}

char **split_c(const string_t *this, char separator)
{
    char **split = malloc(sizeof(char **)
    * strlen(this->str) * strlen(this->str) + 1);
    int y = 0;
    int x = 0;

    for (int i = 0; i < 100; i++)
        split[i] = malloc(sizeof(char *) * strlen(this->str) + 1);
    for (int i = 0; this->str[i] != '\0'; i++) {
        if (this->str[i] == separator) {
            split[y][x] = '\0';
            x = 0;
            y++;
        } else {
            split[y][x] = this->str[i];
            x++;
        }
    }
    split[y][x] = '\0';
    split[y + 1] = NULL;
}