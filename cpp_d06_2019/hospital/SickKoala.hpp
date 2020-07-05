/*
** EPITECH PROJECT, 2020
** Ex02
** File description:
** SickKoala
*/

#ifndef Ex02
#define Ex02

#include <string>

class SickKoala {
    public:
        SickKoala(std::string name_p);
        ~SickKoala();
        void poke();
        bool takeDrug(std::string drug_name);
        void overDrive(std::string fever);
        std::string getName();
    protected:
    private:
        std::string name;
};

#endif /* !Ex02 */