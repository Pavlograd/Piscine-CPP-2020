/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "./ex06.hpp"

int main(void)
{
    Tuple<float, char> t;
    t.a = 1.1f;
    t.b = 'x';
    std::cout << t.toString() << std::endl;
}