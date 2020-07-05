/*
** EPITECH PROJECT, 2020
** cpp_rush1
** File description:
** Exercice 04
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "int.h"
#include "new.h"

typedef struct
{
    Class base;
    int x;
} IntClass;

static void Int_ctor(IntClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static void Int_dtor(IntClass *this)
{
    (void)this;
}

Object *Int_add(IntClass *p1, IntClass *p2)
{
    Object *p3 = new(Int, p1->x + p2->x);

    return (p3);
}

Object *Int_sub(IntClass *p1, IntClass *p2)
{
    Object *p3 = new(Int, p1->x - p2->x);

    return (p3);
}

Object *Int_mult(IntClass *p1, IntClass *p2)
{
    Object *p3 = new(Int, p1->x * p2->x);

    return (p3);
}

Object *Int_div(IntClass *p1, IntClass *p2)
{
    Object *p3;

    if (p2->x == 0)
        raise("Division with zero forbidden");
    p3 = new(Int, p1->x / p2->x);
    return (p3);
}

char *Int_str(IntClass *this)
{
    char result[100];
    char *str;

    sprintf(result, "%d", this->x);
    str = malloc(strlen(result) +
    strlen(this->base.__name__) + 7 * sizeof(char));
    strcpy(str, "<");
    strcat(str, this->base.__name__);
    strcat(str, " (");
    strcat(str, result);
    strcat(str, ")>");

    return (str);
}

bool Int_eq(IntClass *p1, IntClass *p2)
{
    if (p1->x == p2->x)
        return true;
    return false;
}

bool Int_gt(IntClass *p1, IntClass *p2)
{
    if (p1->x > p2->x)
        return true;
    return false;
}

bool Int_lt(IntClass *p1, IntClass *p2)
{
    if (p1->x < p2->x)
        return true;
    return false;
}

static const IntClass _description = {
    {
    .__size__ = sizeof(IntClass),
    .__name__ = "Int",
    .__ctor__ = (ctor_t)&Int_ctor,
    .__dtor__ = (dtor_t)&Int_dtor,
    .__str__ = (to_string_t)&Int_str,
    .__add__ = (binary_operator_t)&Int_add,
    .__sub__ = (binary_operator_t)&Int_sub,
    .__mul__ = (binary_operator_t)&Int_mult,
    .__div__ = (binary_operator_t)&Int_div,
    .__eq__ = (binary_comparator_t)&Int_eq,
    .__gt__ = (binary_comparator_t)&Int_gt,
    .__lt__ = (binary_comparator_t)&Int_lt},
    .x = 0
};

const Class *Int = (const Class *)&_description;