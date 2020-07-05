/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** ex00
*/

#ifndef ex00
#define ex00

#include <cstring>

template <typename T>
int compare(const T &A, const T &B)
{
    if (A == B)
        return 0;
    if (A > B)
        return 1;
    return -1;
}
template <typename T>
int compare(const char *A, const char *B)
{
    if (strcmp(A, B) == 0)
        return 0;
    if (strcmp(A, B) > 0)
        return 1;
    return -1;
}

#endif /* !ex00 */