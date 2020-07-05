/*
** EPITECH PROJECT, 2020
** LittleHand
** File description:
** LittleHand
*/

#ifndef LittleHand_
#define LittleHand_

#include "FruitBox.hpp"

class LittleHand
{
public:
    LittleHand();
    ~LittleHand();
    static void sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
    {
        FruitNode *tmp = unsorted.head();

        while (tmp != NULL)
        {
            if (tmp->fruit->getName() == "lemon") {
                if (lemons.putFruit(tmp->fruit))
                    unsorted.pickFruit();
            } else if (tmp->fruit->getName() == "banana") {
                if (bananas.putFruit(tmp->fruit))
                    unsorted.pickFruit();
            } else if (tmp->fruit->getName() == "lime") {
                if (limes.putFruit(tmp->fruit))
                    unsorted.pickFruit();
            }
            tmp = tmp->next;
        }
    }
protected:
private:
};

#endif /* !LittleHand_ */