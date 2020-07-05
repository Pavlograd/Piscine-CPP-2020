/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** ex00.c
*/

#include "string.h"

void string_init(string_t *this, const char *s)
{
    this->str = malloc(strlen(s) + 1);
    if (this->str == NULL)
        exit(84);
    strcpy(this->str, s);
    this->assign_c = &assign_c;
    this->assign_s = &assign_s;
    this->append_c = &append_c;
    this->append_s = &append_s;
    this->at = &at;
    this->clear = &clear;
    this->size = &size;
    this->compare_c = &compare_c;
    this->compare_s = &compare_s;
    this->copy = &copy;
    this->c_str = &c_str;
    this->empty = &empty;
    this->find_c = &find_c;
    this->find_s = &find_s;
    this->insert_s = &insert_s;
    this->insert_c = &insert_c;
}

void string_destroy(string_t *this)
{
    if (this == NULL)
        exit(84);
    if (this->str != NULL)
        free(this->str);
}