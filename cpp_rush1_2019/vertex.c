/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "vertex.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x, y, z;
}   VertexClass;

static void Vertex_ctor(VertexClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static void Vertex_dtor(VertexClass *this)
{
    (void)this;
}

char *Vertex_str(VertexClass *this)
{
    char result[100];
    char result_y[100];
    char result_z[100];
    char *str;

    sprintf(result, "%d", this->x);
    sprintf(result_y, "%d", this->y);
    sprintf(result_z, "%d", this->z);
    str = malloc(sizeof(char *) * (strlen(result) + strlen(result_y)
    + strlen(result_z) + strlen(this->base.__name__) + 7));
    if (str == NULL)
        raise("Out of  memory");
    sprintf(str, "<%s (%s, %s, %s)>", this->base.__name__,
    result, result_y, result_z);
    return (str);
}

Object *Vertex_add(VertexClass *p1, VertexClass *p2)
{
    Object *p3 = new(Vertex, p1->x + p2->x, p1->y + p2->y, p1->z + p2->z);

    return (p3);
}

Object *Vertex_sub(VertexClass *p1, VertexClass *p2)
{
    Object *p3 = new(Vertex, p1->x - p2->x, p1->y - p2->y, p1->z - p2->z);

    return (p3);
}

static const VertexClass _description = {
    {
    .__size__ = sizeof(VertexClass),
    .__name__ = "Vertex",
    .__ctor__ = (ctor_t)&Vertex_ctor,
    .__dtor__ = (dtor_t)&Vertex_dtor,
    .__str__ = (to_string_t)&Vertex_str,
    .__add__ = (binary_operator_t)&Vertex_add,
    .__sub__ = (binary_operator_t)&Vertex_sub,
    .__mul__ = NULL,
    .__div__ = NULL,
    .__eq__ = NULL,
    .__gt__ = NULL,
    .__lt__ = NULL
    },
    .x = 0,
    .y = 0,
    .z = 0
};

const Class   *Vertex = (const Class *)&_description;