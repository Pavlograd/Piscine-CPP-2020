/*
** EPITECH PROJECT, 2020
** find
** File description:
** find
*/

#ifndef find_
#define find_

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

template <typename T>
typename T::iterator do_find(T &container, int param)
{
    return std::find(container.begin(), container.end(), param);
}

#endif /* !find_ */