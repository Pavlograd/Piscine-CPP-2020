/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "Container.hpp"

int main()
{
    contain<char, std::list> test;
    test.push('t');
    test.aff();
    test.add();
    test.aff();
    contain<int, std::vector> test2;
    test2.push(1);
    test2.aff();
    test2.add();
    test2.aff();
    contain<int, std::stack> test3;
    test3.push(1);
    test3.aff();
    test3.add();
    test3.aff();
    return 0;
}