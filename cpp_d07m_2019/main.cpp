/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "Exam.hpp"

int main()
{
    Exam e = Exam(&Exam::cheat);
    e.kobayashiMaru = &Exam::start;
    (e.*e.kobayashiMaru)(2);
    if (e.isCheating())
        (e.*e.kobayashiMaru)(4);
    Exam::cheat = true;
    if (e.isCheating())
        (e.*e.kobayashiMaru)(6);
}