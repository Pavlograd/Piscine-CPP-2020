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
const T &min(const T &A, const T &B)
{
    std::cout << "template min" << std::endl;
    if (A == B)
        return A;
    if (A < B)
        return A;
    return B;
}

int min(int A, int B)
{
    std::cout << "non-template min" << std::endl;
    if (A == B)
        return A;
    if (A < B)
        return A;
    return B;
}

template <typename T>
const T &templateMin(T *A, int B)
{
    T &C = A[0];

    for (int i = 1; i < B; i++)
        C = min<T>(C, A[i]);
    return C;
}
int nonTemplateMin(int *A, int B)
{
    int C = A[0];
    int D;

    for (int i = 1; i < B; i++) {
        D = A[i];
        C = min(C, D);
    }
    return C;
}
#endif /* !ex00 */