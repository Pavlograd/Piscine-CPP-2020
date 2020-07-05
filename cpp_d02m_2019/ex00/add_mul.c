/*
** EPITECH PROJECT, 2020
** add_mul
** File description:
** add_mul.c
*/

#include <stdio.h>

void  add_mul_4param(int first , int  second , int *sum , int *product)
{
    *sum = first + second;
    *product = first * second;
}

void  add_mul_2param(int *first , int *second)
{
    int temp_first = *first;
    int temp_second = *second;

    *first = temp_first + temp_second;
    *second = temp_first * temp_second;
}