/*
** EPITECH PROJECT, 2020
** ex01 cpp
** File description:
** mem_ptr.c
*/

#include "mem_ptr.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void add_str(const char *str1, const char *str2, char **res)
{
    *res = malloc(strlen(str1) + strlen(str2) + 1);

    if (str1 == NULL || str2 == NULL)
        exit(84);
    if (*res == NULL)
        exit(84);
    strcpy(*res, str1);
    strcat(*res, str2);
    return;
}

void  add_str_struct(str_op_t *str_op)
{
    str_op->res = malloc(strlen(str_op->str1) + strlen(str_op->str2) + 1);

    if (str_op->str1 == NULL || str_op->str2 == NULL)
        exit (84);
    if (str_op->res == NULL)
        exit(84);
    strcpy(str_op->res, str_op->str1);
    strcat(str_op->res, str_op->str2);
    return;
}