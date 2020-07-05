/*
** EPITECH PROJECT, 2020
** Encryption
** File description:
** Encryption
*/

#ifndef Encryption_
#define Encryption_

#include "IEncryptionMethod.hpp"
#include <iostream>
#include <string>
#include <algorithm>

class Encryption
{
public:
	typedef void (IEncryptionMethod::*func)(char);
	Encryption(IEncryptionMethod &encryptionMethod, func _function);
	~Encryption();
	void operator()(char plainchar);
	static void encryptString(IEncryptionMethod &encryptionMethod, const std::string &toEncrypt);
	static void decryptString(IEncryptionMethod &encryptionMethod, const std::string &toDecrypt);

protected:
private:
	func function;
	IEncryptionMethod *Method;
};

#endif /* !Encryption_ */