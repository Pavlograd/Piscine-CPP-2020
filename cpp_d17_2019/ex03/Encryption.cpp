/*
** EPITECH PROJECT, 2020
** Encryption
** File description:
** Encryption
*/

#include "Encryption.hpp"

Encryption::Encryption(IEncryptionMethod &encryptionMethod, func _func)
{
    Method = &encryptionMethod;
    function = _func;
}

Encryption::~Encryption()
{
}

void Encryption::operator()(char plainchar)
{
    (Method->*function)(plainchar);
}

void Encryption::encryptString(IEncryptionMethod &encryptionMethod, const std::string &toEncrypt)
{
    encryptionMethod.reset();
    std::for_each(toEncrypt.begin(), toEncrypt.end(), Encryption(encryptionMethod, &IEncryptionMethod::encryptChar));
    std::cout << std::endl;
}

void Encryption::decryptString(IEncryptionMethod &encryptionMethod, const std::string &toDecrypt)
{
    encryptionMethod.reset();
    std::for_each(toDecrypt.begin(), toDecrypt.end(), Encryption(encryptionMethod, &IEncryptionMethod::decryptChar));
    std::cout << std::endl;
}