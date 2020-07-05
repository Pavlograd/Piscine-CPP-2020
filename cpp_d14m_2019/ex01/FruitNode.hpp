/*
** EPITECH PROJECT, 2020
** FruitNode
** File description:
** FruitNode
*/

#ifndef FruitNode_
#define FruitNode_

#include "Fruit.hpp"

struct FruitNode {
    Fruit *fruit;
    FruitNode *next;
};

#endif /* !FruitNode_ */