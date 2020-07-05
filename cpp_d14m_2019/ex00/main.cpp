/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "Fruit.hpp"
#include "Lemon.hpp"
#include "Banana.hpp"
#include "FruitBox.hpp"

int main(void)
{
    Banana *b = new Banana;
    Lemon *l = new Lemon;

    FruitBox box = FruitBox(10);
    std::cout << box.nbFruits() << std::endl;
    std::cout << box.pickFruit() << std::endl;
    std::cout << box.head() << std::endl;

    box.putFruit(b);
    std::cout << "nb " << box.nbFruits() << std::endl;
    std::cout << "head " << box.head()->fruit->getName() << std::endl;

    box.putFruit(l);
    std::cout << "nb " << box.nbFruits() << std::endl;
    std::cout << "head " << box.head()->fruit->getName() << std::endl;

    box.pickFruit();
    std::cout << "pick" << std::endl,
    std::cout << "nb " << box.nbFruits() << std::endl;
    std::cout << "head " << box.head()->fruit->getName() << std::endl;

    box.pickFruit();
    std::cout << "pick" << std::endl,
    std::cout << "nb " <<  box.nbFruits() << std::endl;
    std::cout << "head " << box.head() << std::endl;
}