/*
** EPITECH PROJECT, 2020
** cpp_rush1
** File description:
** Efercice 04
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "float.h"
#include "new.h"

typedef struct
{
    Class base;
    float f;
} FloatClass;

static void Float_ctor(FloatClass *this, va_list *args)
{
    this->f = va_arg(*args, double);
}

static void Float_dtor(FloatClass *this)
{
    (void)this;
}

Object *Float_add(FloatClass *p1, FloatClass *p2)
{
    Object *p3 = new(Float, p1->f + p2->f);

    return (p3);
}

Object *Float_sub(FloatClass *p1, FloatClass *p2)
{
    Object *p3 = new(Float, p1->f - p2->f);

    return (p3);
}

Object *Float_mult(FloatClass *p1, FloatClass *p2)
{
    Object *p3 = new(Float, p1->f * p2->f);

    return (p3);
}

Object *Float_div(FloatClass *p1, FloatClass *p2)
{
    Object *p3;

    if (p2->f == 0.0 || p2->f == 0)
        raise("Division with zero forbidden");
    p3 = new(Float, p1->f / p2->f);
    return (p3);
}

char *FLoat_str(FloatClass *this)
{
    char result[100];
    char *str;

    sprintf(result, "%f", this->f);
    str = malloc(strlen(result) +
    strlen(this->base.__name__) + 7 * sizeof(char));
    strcpy(str, "<");
    strcat(str, this->base.__name__);
    strcat(str, " (");
    strcat(str, result);
    strcat(str, ")>");

    return (str);
}

bool Float_eq(FloatClass *p1, FloatClass *p2)
{
    if (p1->f == p2->f)
        return true;
    return false;
}

bool Float_gt(FloatClass *p1, FloatClass *p2)
{
    if (p1->f > p2->f)
        return true;
    return false;
}

bool Float_lt(FloatClass *p1, FloatClass *p2)
{
    if (p1->f < p2->f)
        return true;
    return false;
}

static const FloatClass _description = {
    {
    .__size__ = sizeof(FloatClass),
    .__name__ = "Float",
    .__ctor__ = (ctor_t)&Float_ctor,
    .__dtor__ = (dtor_t)&Float_dtor,
    .__str__ = (to_string_t)&FLoat_str,
    .__add__ = (binary_operator_t)&Float_add,
    .__sub__ = (binary_operator_t)&Float_sub,
    .__mul__ = (binary_operator_t)&Float_mult,
    .__div__ = (binary_operator_t)&Float_div,
    .__eq__ = (binary_comparator_t)&Float_eq,
    .__gt__ = (binary_comparator_t)&Float_gt,
    .__lt__ = (binary_comparator_t)&Float_lt},
    .f = 0.0
};

const Class *Float = (const Class *)&_description;
