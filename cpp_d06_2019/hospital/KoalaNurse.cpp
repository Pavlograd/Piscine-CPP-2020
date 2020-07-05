/*
** EPITECH PROJECT, 2020
** KoalaNurse
** File description:
** KoalaNurse.cpp
*/

#include <iostream>
#include <fstream>
#include <string>
#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(int id_p)
{
    id = id_p;
    working = false;
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << id << ": Finally some rest!" << std::endl;
}


void KoalaNurse::giveDrug(std::string drug_name, SickKoala *koala)
{
    if (koala)
        koala->takeDrug(drug_name);
    else {
        std::cerr << "The Koala doesn't exist or doesn't take drugs" << std::endl;
        exit(84);
    }
}

std::string KoalaNurse::readReport(std::string file_name)
{
    std::string line;
    std::ifstream myFile(file_name);
    std::string drug_name;
    int nb_line = 0;

    if (!myFile || file_name.substr(file_name.find_last_of(".") + 1) != "report")
        return ("");
    while (getline(myFile, line)) {
        if (line.length() != 0) {
            nb_line++;
            drug_name = line;
        }
    }
    myFile.close();
    if (nb_line != 1)
        return ("");
    std::cout << "Nurse " << id << ": Kreog! Mr." << (file_name.substr(file_name.find_last_of("/\\") + 1)).substr(0, file_name.find(".", 0)) << " needs a " << drug_name << "!" << std::endl;
    return (drug_name);
}

void KoalaNurse::timeCheck()
{
    if (working == false) {
        std::cout << "Nurse " << id << ": Time to get to work!" << std::endl;
        working = true;        
    } else {
        std::cout << "Nurse " << id << ": Time to go home to my eucalyptus forest!" << std::endl;
        working = false;
    }
}

int KoalaNurse::getID()
{
    return (id);
}

