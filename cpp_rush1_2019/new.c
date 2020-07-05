/*
** EPITECH PROJECT, 2020
** new and delete
** File description:
** new.c
*/

#include "new.h"
#include "player.h"
#include "object.h"
#include "raise.h"

Object *new(const Class *class, ...)
{
    va_list ap;
    Object *new = malloc(class->__size__ + 1);

    if (new == NULL)
        raise("Out of  memory");
    memcpy(new, class, class->__size__);
    if (class->__ctor__) {
        va_start(ap, class);
        class->__ctor__(new, &ap);
        va_end(ap);
    }
    return new;
}

Object *va_new(const Class *class, va_list *ap)
{
    Object *new = malloc(class->__size__ + 1);

    if (new == NULL)
        raise("Out of  memory");
    memcpy(new, class, class->__size__);
    if (class->__ctor__)
        class->__ctor__(new, ap);
    return new;
}

void delete(Object *ptr)
{
    const Class *old = ptr;

    if (ptr && old->__dtor__)
        old->__dtor__(ptr);
    free(ptr);
}