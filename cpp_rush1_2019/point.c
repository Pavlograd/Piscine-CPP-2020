/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "point.h"
#include "new.h"

typedef struct
{
    Class base;
    int x, y;
} PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
    (void) this;
}

char *Point_str(PointClass *this)
{
    char result[100];
    char result_y[100];
    char *str;

    sprintf(result, "%d", this->x);
    sprintf(result_y, "%d", this->y);
    str = malloc(sizeof(char *) * (strlen(result) + strlen(result_y)
    + strlen(this->base.__name__) + 7));
    if (str == NULL)
        raise("Out of  memory");
    sprintf(str, "<%s (%s, %s)>", this->base.__name__, result,
    result_y);
    return (str);
}

Object *Point_add(PointClass *p1, PointClass *p2)
{
    Object *p3 = new(Point, p1->x + p2->x, p1->y + p2->y);

    return (p3);
}

Object *Point_sub(PointClass *p1, PointClass *p2)
{
    Object *p3 = new(Point, p1->x - p2->x, p1->y - p2->y);

    return (p3);
}

static const PointClass _description = {
    {
    .__size__ = sizeof(PointClass),
    .__name__ = "Point",
    .__ctor__ = (ctor_t)&Point_ctor,
    .__dtor__ = (dtor_t)&Point_dtor,
    .__str__ = (to_string_t)&Point_str,
    .__add__ = (binary_operator_t)&Point_add,
    .__sub__ = (binary_operator_t)&Point_sub,
    .__mul__ = NULL,
    .__div__ = NULL,
    .__eq__ = NULL,
    .__gt__ = NULL,
    .__lt__ = NULL},
    .x = 0,
    .y = 0
};

const Class *Point = (const Class *)&_description;