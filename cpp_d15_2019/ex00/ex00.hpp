/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** ex00
*/

#ifndef ex00
#define ex00

template <typename T>
const T &max(const T &A, const T &B)
{
    return A > B ? A : B;
}
template <typename T>
const T &min(const T &A, const T &B)
{
    return A > B ? B : A;
}
template <typename T>
const T add(const T &A, const T &B)
{
    const T C = A + B;
    return (C);
}
template <typename T>
void swap(T &A, T &B)
{
    const T C = A;

    A = B;
    B = C;
}

#endif /* !ex00 */