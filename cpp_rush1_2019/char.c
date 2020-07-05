/*
** EPITECH PROJECT, 2020
** cpp_rush1
** File description:
** Ecercice 04
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "char.h"
#include "new.h"

typedef struct
{
    Class base;
    char c;
} CharClass;

static void Char_ctor(CharClass *this, va_list *args)
{
    this->c = va_arg(*args, int);
}

static void Char_dtor(CharClass *this)
{
    (void)this;
}

Object *Char_add(CharClass *p1, CharClass *p2)
{
    Object *p3 = new(Char, p1->c + p2->c);

    return (p3);
}

Object *Char_sub(CharClass *p1, CharClass *p2)
{
    Object *p3 = new(Char, p1->c - p2->c);

    return (p3);
}

Object *Char_mult(CharClass *p1, CharClass *p2)
{
    Object *p3 = new(Char, p1->c * p2->c);

    return (p3);
}

Object *Char_div(CharClass *p1, CharClass *p2)
{
    Object *p3;

    if (p2->c == 0)
        raise("Division with zero forbidden");
    p3 = new(Char, p1->c / p2->c);
    return (p3);
}

char *Char_str(CharClass *this)
{
    char result[100];
    char *str;

    sprintf(result, "%c", this->c);
    str = malloc(strlen(result) +
    strlen(this->base.__name__) + 7 * sizeof(char));
    strcpy(str, "<");
    strcat(str, this->base.__name__);
    strcat(str, " (");
    strcat(str, result);
    strcat(str, ")>");

    return (str);
}

bool Char_eq(CharClass *p1, CharClass *p2)
{
    if (p1->c == p2->c)
        return true;
    return false;
}

bool Char_gt(CharClass *p1, CharClass *p2)
{
    if (p1->c > p2->c)
        return true;
    return false;
}

bool Char_lt(CharClass *p1, CharClass *p2)
{
    if (p1->c < p2->c)
        return true;
    return false;
}

static const CharClass _description = {
    {
    .__size__ = sizeof(CharClass),
    .__name__ = "Char",
    .__ctor__ = (ctor_t)&Char_ctor,
    .__dtor__ = (dtor_t)&Char_dtor,
    .__str__ = (to_string_t)&Char_str,
    .__add__ = (binary_operator_t)&Char_add,
    .__sub__ = (binary_operator_t)&Char_sub,
    .__mul__ = (binary_operator_t)&Char_mult,
    .__div__ = (binary_operator_t)&Char_div,
    .__eq__ = (binary_comparator_t)&Char_eq,
    .__gt__ = (binary_comparator_t)&Char_gt,
    .__lt__ = (binary_comparator_t)&Char_lt},
    .c = '\0'
};

const Class *Char = (const Class *)&_description;