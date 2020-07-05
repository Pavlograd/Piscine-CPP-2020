/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** castamanie.c
*/

#include "castamania.h"

#include <stdio.h>
#include <stdlib.h>

void print_division(division_t *operation)
{
    if (operation->div_type == INTEGER)
        printf("%d\n", ((struct integer_op_s *)operation->div_op)->res);
    else if ((operation->div_type == DECIMALE))
        printf("%f\n", ((struct decimale_op_s *)operation->div_op)->res);
}

void  exec_operation(instruction_type_t  instruction_type , void *data)
{
    if (instruction_type == ADD_OPERATION) {
        exec_add(((((struct addition_s *)
        ((struct instruction_s *)data)->operation))));
        if ((((struct instruction_s *)data)->output_type) == VERBOSE)
            printf("%d\n",
            ((((struct addition_s *)
            ((struct instruction_s *)data)->operation)))->add_op.res);
        return;
    } else if (instruction_type == DIV_OPERATION) {
        exec_div(((((struct division_s *)
        ((struct instruction_s *)data)->operation))));
        if ((((struct instruction_s *)data)->output_type) == VERBOSE)
            print_division(((((struct division_s *)
            ((struct instruction_s *)data)->operation))));
    } else
        exit(84);
}

void  exec_instruction(instruction_type_t  instruction_type , void *data)
{
    if (instruction_type == PRINT_INT)
        printf("%d\n", *((int *)data));
    else if (instruction_type == PRINT_FLOAT)
        printf("%f\n", *((float *)data));
    else
        exec_operation(instruction_type, data);
}