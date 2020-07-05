/*
** EPITECH PROJECT, 2019
** cpp_rush1
** File description:
** Exercice 03
*/

#include <stdio.h>
#include "new.h"
#include "object.h"
#include "int.h"
#include "float.h"
#include "char.h"

void compareAndDivide(Object *a, Object *b)
{
    if (gt(a, b))
        printf("a > b\n");
    else if (lt(a, b))
        printf("a < b\n");
    else
        printf("a == b\n");
    printf("b / a = %s\n", str(division(b, a)));
}

int main(void)
{
    Object *p1 = new (Int, 2);
    Object *p2 = new (Int, 1);

    printf("%s + %s = %s\n", str(p1), str(p2), str(addition(p1, p2)));
    printf("%s - %s = %s\n", str(p1), str(p2), str(subtraction(p1, p2)));
    printf("%s * %s = %s\n", str(p1), str(p2), str(multiplication(p1, p2)));
    printf("%s / %s = %s\n", str(p1), str(p2), str(division(p1, p2)));

    compareAndDivide(p1, p2);

    return (0);
}
