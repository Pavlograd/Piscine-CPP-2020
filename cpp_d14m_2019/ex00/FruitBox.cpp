/*
** EPITECH PROJECT, 2020
** FruitBox
** File description:
** FruitBox
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size)
{
    Size = size;
}

FruitNode *FruitBox::head() const
{
    return Head;
}

int FruitBox::nbFruits() const
{
    FruitNode *tmp = Head;
    int size = 0;

    while (tmp != NULL) {
        tmp = tmp->next;
        size++;
    }
    return size;
}

bool FruitBox::AlreadyExists(Fruit *f)
{
    FruitNode *tmp = Head;
    while (tmp != NULL) {
        if (tmp->fruit == f)
            return true;
        tmp = tmp->next;
    }
    return false;
}

bool FruitBox::putFruit(Fruit *f)
{
    FruitNode *tmp = new FruitNode;
    tmp->fruit = f;
    tmp->next = NULL;

    if (nbFruits() == Size || AlreadyExists(f) == true) {
        delete(tmp);
        return false;
    }
    if(Head == NULL) {
        Head = tmp;
        Tail = tmp;
    } else {
        Tail->next = tmp;
        Tail = Tail->next;
    }
    return true;
}

Fruit *FruitBox::pickFruit()
{
    Fruit *tmp;
    FruitNode *tmpNode = Head;

    if (Head == NULL)
        return NULL;
    tmp = tmpNode->fruit;
    Head = Head->next;
    return tmp;
}