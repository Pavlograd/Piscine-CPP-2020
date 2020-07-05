/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <iostream>
#include <string>
#include "./ex02.hpp"

int main()
{
    int tab[2] = {3, 0};
    float tab2[4] = {4.25, 5.042, 6.7, 1.28};
    int minimum = templateMin(tab, sizeof(tab)/sizeof(tab[0]));
    std::cout << "templateMin(tab , 2) = " << minimum << std::endl;
    minimum = nonTemplateMin(tab, 2);
    std::cout << "nonTemplateMin(tab , 2) = " << minimum << std::endl;
    std::cout << "nonTemplateMin(tab , 2) = " << templateMin(tab2, 4) << std::endl;
}