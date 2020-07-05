/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** ta_to_2dtab.c
*/

#include <stdio.h>
#include <stdlib.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int x = 0;

    *res = malloc(sizeof(int *) * (length * width));
    if (res == NULL)
        exit(84);
    for (int i = 0; i < length + 1; i++)
        (*res)[i] = malloc(width * sizeof(int) + 1);
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            (*res)[i][j] = tab[x];
            x++;
        }
    }
}