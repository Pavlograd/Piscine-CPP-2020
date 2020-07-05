/*
** EPITECH PROJECT, 2020
** Cesar
** File description:
** Cesar
*/

#include "Cesar.hpp"

Cesar::Cesar()
{
}

Cesar::~Cesar()
{
}

void Cesar::encryptChar(char plainchar)
{
    if (isalpha(plainchar)) {
        if (isupper(plainchar)) {
            plainchar += shift;
            if (!isalpha(plainchar) || islower(plainchar))
                plainchar -= 26;
        } else {
            plainchar += shift;
            if (!isalpha(plainchar))
                plainchar -= 26;
        }
    }
    std::cout << plainchar;
    shift++;
    if (shift == 29)
        shift = 3;
}

void Cesar::decryptChar(char cipherchar)
{
    if (isalpha(cipherchar)) {
        if (isupper(cipherchar)) {
            cipherchar -= shift;
            if (!isalpha(cipherchar))
                cipherchar += 26;
        } else {
            cipherchar -= shift;
            if (!isalpha(cipherchar) || isupper(cipherchar))
                cipherchar += 26;
        }
    }
    std::cout << cipherchar;
    shift++;
    if (shift == 29)
        shift = 3;
}

void Cesar::reset()
{
    shift = 3;
}