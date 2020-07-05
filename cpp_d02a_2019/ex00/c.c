/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** c.c
*/

#include "double_list.h"
#include <stdlib.h>
#include <stdio.h>

bool  double_list_del_elem_at_position(double_list_t *front_ptr , unsigned  intposition)
{

}

bool  double_list_del_elem_at_back(double_list_t *front_ptr)
{
    double_list_t tmp = *front_ptr;

    if (tmp == NULL)
        return false;
    if (tmp->next == NULL) {
        *front_ptr = NULL;
        return true;
    }
    while (tmp->next->next != NULL)
        tmp = tmp->next;
    tmp->next = NULL;
    return true;
}

bool  double_list_del_elem_at_front(double_list_t *front_ptr) {
    double_list_t tmp = *front_ptr;

    if (tmp == NULL)
        return false;
    tmp = tmp->next;
    *front_ptr = tmp;
    return true;
}

bool  double_list_add_elem_at_position(double_list_t *front_ptr , double  elem ,unsigned  int  position)
{
    double_list_t tmp = *front_ptr;
    doublelist_node_t *new = malloc(sizeof(doublelist_node_t));

    if (new == NULL || tmp == NULL)
        return false;
    new->value = elem;
    while (position != 0) {
        tmp = tmp->next;
        if (tmp == NULL)
            return false;
        position--;
    }
    new->next = tmp->next;
    tmp->next = new;
    return true;
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    double_list_t tmp = *front_ptr;
    doublelist_node_t *new = malloc(sizeof(doublelist_node_t));

    if (new == NULL)
        return false;
    new->value = elem;
    new->next = NULL;
    if (tmp == NULL) {
        *front_ptr = new;
        return true;
    } else
        while (tmp->next != NULL)
            tmp = tmp->next;
    tmp->next = new;
    return true;
}

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    double_list_t new = malloc(sizeof(double_list_t));

    if (new == NULL)
        return false;
    new->value = elem;
    new->next = *front_ptr;
    *front_ptr = new;
    return true;
}

void double_list_dump(double_list_t list)
{
    while (list != NULL)
    {
        printf("%f\n", list->value);
        list = list->next;
    }
}

unsigned int double_list_get_size(double_list_t list)
{
    int i = 0;
    while (list != NULL) {
        list = list->next;
        i++;
    }
    return i;
}

bool double_list_is_empty(double_list_t list)
{
    int i = 0;

    while (list != NULL)
    {
        list = list->next;
        i++;
    }
    if (i == 0)
        return true;
    return false;
}

static void populate_list(double_list_t *list_head)
{
    double_list_add_elem_at_back(list_head, 5.2);
    double_list_add_elem_at_back(list_head, 42.5);
    double_list_add_elem_at_back(list_head, 3.3);
    double_list_del_elem_at_back(list_head);
}

static void test_size(double_list_t list_head)
{
    printf("There  are %u elements  in the  list\n", double_list_get_size(list_head));
    double_list_dump(list_head);
}

/*static void test_del(double_list_t *list_head)
{
    double_list_del_elem_at_back(list_head);
    printf("There  are %u elements  in the  list\n", double_list_get_size(*list_head));
    double_list_dump(*list_head);
}*/

int main(void)
{
    double_list_t list_head = NULL;

    populate_list(&list_head);

    test_size(list_head);
    /*test_del(&list_head);*/
    return 0;
}