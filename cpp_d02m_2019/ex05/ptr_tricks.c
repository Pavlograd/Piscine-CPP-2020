/*
** EPITECH PROJECT, 2020
** ex05
** File description:
** ptr_tricks.c
*/

#include "ptr_tricks.h"
#include <stdio.h>

int get_array_nb_elem(const int *ptr1, const int *ptr2)
{
    int result = ((void *)ptr2 - (void *)ptr1) / sizeof(*ptr1);

    if ((void *)ptr1 > (void *)ptr2)
        result = ((void *)ptr1 - (void *)ptr2) / sizeof(*ptr1);
    return result;
}

whatever_t *get_struct_ptr(const int *member_ptr)
{
    whatever_t new;

    int y = (void *)&new.member - (void *)&new;

    return ((void *)member_ptr - y);
}