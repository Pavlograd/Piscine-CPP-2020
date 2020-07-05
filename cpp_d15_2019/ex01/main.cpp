/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <iostream>
#include <string>
#include "./ex01.hpp"

class toto
{
public:
    toto() = default;
    toto &operator=(const toto &) = delete;
    toto(const toto &) = delete;
    bool operator==(const toto &) const { return true; }
    bool operator>(const toto &) const { return false; }
    bool operator<(const toto &) const { return false; }
};

int main()
{
    toto a, b;
    std::cout << ::compare(a, b) << std::endl; //return 0
    std::cout << ::compare(1, 2) << std::endl; // return -1
    std::cout << ::compare<const char *>("chaineZ", "chaineA42") << std::endl;//return 1
    const char *s1 = "42", *s2 = "lulz";
    std::cout << ::compare(s1, s2) << std::endl; // return -1
}