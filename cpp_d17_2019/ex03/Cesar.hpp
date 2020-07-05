/*
** EPITECH PROJECT, 2020
** Cesar
** File description:
** Cesar
*/

#ifndef Cesar_
#define Cesar_

#include "IEncryptionMethod.hpp"
#include <iostream>

class Cesar : public IEncryptionMethod {
	public:
		Cesar();
		~Cesar();
        void encryptChar(char plainchar);
		void decryptChar(char cipherchar);
		void reset();
	protected:
	private:
        int shift = 3;
};

#endif /* !Cesar_ */