/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "FruitBox.hpp"
#include "Banana.hpp"
#include "Lemon.hpp"
#include "Lime.hpp"
#include "LittleHand.hpp"
#include <iostream>

void print_box_content(FruitBox input, std::string name_box)
{
    std::cout << "==== " << name_box << " (size : " << input.nbFruits() << ") ====" << std::endl;
    for (int a = input.nbFruits(); a > 0; --a) {
        std::cout << name_box << " : " << input.pickFruit()->getName() << std::endl;
    }
}

int main()
{
    //Banana *b = new Banana;
    //Lemon *l = new Lemon;

    FruitBox box_banana(23);
    FruitBox box_lemon(33);
    FruitBox box_lime(10);
    FruitBox box_unsort(9);

    Banana  *banana1 = new Banana;
    Banana  *banana2 = new Banana;
    Banana  *banana3 = new Banana;
    Lemon   *lemon1 = new Lemon;
    Lemon   *lemon2 = new Lemon;
    Lemon   *lemon3 = new Lemon;
    Lemon   *lemon4 = new Lemon;
    Lime    *lime1 = new Lime;
    Lime    *lime2 = new Lime;
    Lime    *lime3 = new Lime;
    Lime    *lime4 = new Lime;
    Lime    *lime5 = new Lime;

    box_banana.putFruit(banana1);
    box_lemon.putFruit(lemon1);
    box_lime.putFruit(lime1);
    box_unsort.putFruit(banana2);
    box_unsort.putFruit(banana3);
    box_unsort.putFruit(lemon2);
    box_unsort.putFruit(lemon3);
    box_unsort.putFruit(lemon4);
    box_unsort.putFruit(lime2);
    box_unsort.putFruit(lime3);
    box_unsort.putFruit(lime4);
    box_unsort.putFruit(lime5);

    LittleHand::sortFruitBox(nullptr box_lemon, box_banana, box_lime);

    print_box_content(box_unsort, "unsort");
    print_box_content(box_lemon, "lemon");
    print_box_content(box_banana, "banana");
    print_box_content(box_lime, "lime");
}