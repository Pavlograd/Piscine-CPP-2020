/*
** EPITECH PROJECT, 2020
** OneTime
** File description:
** OneTime
*/

#include "OneTime.hpp"

OneTime::OneTime(const std::string &key)
{
    Key = key;
}

OneTime::~OneTime()
{
}

void OneTime::encryptChar(char plainchar)
{
    if (isalpha(plainchar)) {
        if (isupper(plainchar)) {
            if (islower(Key[shift]))
                plainchar += Key[shift] - 97;
            else
                plainchar += Key[shift] - 65;
            if (!isalpha(plainchar) || islower(plainchar))
                plainchar -= 26;
        } else {
            if (islower(Key[shift]))
                plainchar += Key[shift] - 97;
            else
                plainchar += Key[shift] - 65;
            if (!isalpha(plainchar))
                plainchar -= 26;
        }
    }
    std::cout << plainchar;
    shift++;
    if (shift == Key.size())
        shift = 0;
}

void OneTime::decryptChar(char cipherchar)
{
    if (isalpha(cipherchar)) {
        if (isupper(cipherchar)) {
            if (islower(Key[shift]))
                cipherchar -= Key[shift] - 97;
            else
                cipherchar -= Key[shift] - 65;
            if (!isalpha(cipherchar))
                cipherchar += 26;
        } else {
            if (islower(Key[shift]))
                cipherchar -= Key[shift] - 97;
            else
                cipherchar -= Key[shift] - 65;
            if (!isalpha(cipherchar) || isupper(cipherchar))
                cipherchar += 26;
        }
    }
    std::cout << cipherchar;
    shift++;
    if (shift == Key.size())
        shift = 0;
}

void OneTime::reset()
{
    shift = 0;
}