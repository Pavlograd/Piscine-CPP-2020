/*
** EPITECH PROJECT, 2020
** ex03
** File description:
** funct_ptr.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "func_ptr.h"
#include <ctype.h>

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    char *temp = malloc(strlen(str) + 1);
    char c;
    int n = strlen(str);

    strcpy(temp, str);
    for (int i = 0; i < n / 2; i++) {
        c = temp[i];
        temp[i] = temp[n - i - 1];
        temp[n - i - 1] = c;
    }
    printf("%s\n", temp);
}

void print_upper(const char *str)
{
    char *temp = malloc(strlen(str) + 1);
    int len = strlen(str);

    strcpy(temp, str);
    for (int i = 0; i < len; i++) {
        temp[i] = toupper(temp[i]);
    }
    printf("%s\n", temp);
}

void print_42(const char *str)
{
    char *temp = malloc(strlen(str) + 1);

    strcpy(temp, str);
    printf("%s\n", "42");
}

void  do_action(action_t  action , const  char *str)
{
    void (*func_ptr[])() = {print_normal, print_reverse, print_upper, print_42};

    (func_ptr)[action](str);
}
