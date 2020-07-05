/*
** EPITECH PROJECT, 2020
** FruitBox
** File description:
** FruitBox
*/

#ifndef FruitBox_
#define FruitBox_

#include "FruitNode.hpp"

class FruitBox {
	public:
        FruitBox(int size);
        FruitNode *head() const;
        int nbFruits() const;
        bool putFruit(Fruit *f);
        Fruit *pickFruit();
        bool AlreadyExists(Fruit *f);
        void deleteNode(FruitNode *n);
        
	protected:
	private:
        FruitNode *Head = NULL;
        FruitNode *Tail = NULL;
        int Size = 0;
};

#endif /* !FruitBox_ */