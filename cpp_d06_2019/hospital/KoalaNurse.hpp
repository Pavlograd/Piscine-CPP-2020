/*
** EPITECH PROJECT, 2020
** KoalaNurse
** File description:
** KoalaNurse
*/

#ifndef Ex03
#define Ex03

#include "SickKoala.hpp"
#include <string>

class KoalaNurse {
	public:
		KoalaNurse(int id_p);
		~KoalaNurse();
        void giveDrug(std::string drug_name, SickKoala *koala);
        std::string readReport(std::string file_name);
        void timeCheck();
        int getID();
	protected:
	private:
    int id;
    bool working;
};

#endif /* !Ex03 */
