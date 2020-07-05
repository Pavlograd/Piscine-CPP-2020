/*
** EPITECH PROJECT, 2020
** OneTime
** File description:
** OneTime
*/

#ifndef OneTime_
#define OneTime_

#include "IEncryptionMethod.hpp"
#include <iostream>

class OneTime : public IEncryptionMethod {
	public:
        OneTime(const std::string &key);
		~OneTime();
        void encryptChar(char plainchar);
		void decryptChar(char cipherchar);
		void reset();
	protected:
	private:
        size_t shift = 0;
		std::string Key;
};

#endif /* !OneTime_ */