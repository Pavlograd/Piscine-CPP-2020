/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** div.c
*/

#include "castamania.h"

#include <stdio.h>
#include <stdlib.h>

int  integer_div(int a, int b)
{
    if (b == 0)
        return (0);
    else
        return (a/b);
}

float  decimale_div(int a, int b)
{
    if (b == 0)
        return (0);
    else
        return (a/b);
}

void  exec_div(division_t *operation)
{
    int a = 0;
    int b = 0;
    float c = 0;
    float d = 0;

    if (operation->div_type == INTEGER) {
        a = ((struct integer_op_s *)operation->div_op)->a;
        b = ((struct integer_op_s *)operation->div_op)->b;
        ((struct integer_op_s *)operation->div_op)->res = integer_div(a, b);
    } else if ((operation->div_type == DECIMALE)) {
        c = ((struct decimale_op_s *)operation->div_op)->a;
        d = ((struct decimale_op_s *)operation->div_op)->b;
        ((struct decimale_op_s *)operation->div_op)->res = decimale_div(c, d);
    }
}