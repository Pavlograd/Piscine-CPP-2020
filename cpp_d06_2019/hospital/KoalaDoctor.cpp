/*
** EPITECH PROJECT, 2020
** KoalaDoctor
** File description:
** KoalaDoctor
*/

#include <iostream>
#include <fstream>
#include "KoalaDoctor.hpp"
#include "SickKoala.hpp"

KoalaDoctor::KoalaDoctor(std::string name_p)
{
    name = name_p;
    working = false;

    std::cout << "Dr." << name << ": I'm Dr." << name << "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
}

void KoalaDoctor::diagnose(SickKoala *koala)
{
    std::string file_name = koala->getName() + ".report";
    std::ofstream file { file_name };
    std::string array_drugs[5] = {"Mars", "Buronzand", "Viagra", "Extasy", "Eucalyptus leaf"};
    std::string drug_name = array_drugs[random()% 5];

    std::cout << "Dr." << name << ": So what's goerking you Mr." << koala->getName() << "?" << std::endl;
    koala->poke();

    file << drug_name << std::endl;

    file.close();
}

void KoalaDoctor::timeCheck()
{
    if (working == false) {
        std::cout << "Dr." << name << ": Time to get to work!" << std::endl;
        working = true;        
    } else {
        std::cout << "Dr." << name << ": Time to go home to my eucalyptus forest!" << std::endl;
        working = false;
    }
}

std::string KoalaDoctor::getName()
{
    return (name);
}