/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** ex00
*/

#ifndef ex00
#define ex00

#include <cstring>
#include <iostream>
#include <string>

template <typename T>
void foreach(const T *array, void func(const T &elem), int size)
{
    for (int i = 0; i < size; i++)
        func(array[i]);
}

template <typename T>
void print(const T &elem)
{
    std::cout << elem << std::endl;
}
#endif /* !ex00 */