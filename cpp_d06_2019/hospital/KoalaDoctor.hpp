/*
** EPITECH PROJECT, 2020
** KoalaDoctor
** File description:
** KoalaDoctor
*/

#ifndef Ex04
#define Ex04

#include "SickKoala.hpp"
#include <string>

class KoalaDoctor {
	public:
		KoalaDoctor(std::string name_p);
		~KoalaDoctor();
        void diagnose(SickKoala *koala);
        void timeCheck();
        std::string getName();
	protected:
	private:
    std::string name;
    bool working;
};

#endif /* !Ex04 */
