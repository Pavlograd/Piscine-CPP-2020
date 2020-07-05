/*
** EPITECH PROJECT, 2020
** Ex02
** File description:
** SickKoala
*/

#include <iostream>
#include <algorithm>
#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name_p)
{
    if (name_p.empty()) {
        std::cerr << "You have to enter a value for the name" << std::endl;
        exit(84);
    }
    name = name_p;
}

SickKoala::~SickKoala()
{
    if (!name.empty())
        std::cout << "Mr." << name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

void SickKoala::poke()
{
    std::cout << "Mr." << name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string drug_name)
{
    if ((drug_name.compare("Mars")) == 0)
        std::cout << "Mr." << name << ": Mars, and it kreogs!" << std::endl;
    else if ((drug_name.compare("Buronzand")) == 0)
        std::cout << "Mr." << name << ": And you'll sleep right away!" << std::endl;
    else {
        std::cout << "Mr." << name << ": Goerkreog!" << std::endl;
        return false;
    }
    return true;
}

std::string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
    }
    return str;
}

void SickKoala::overDrive(std::string fever)
{
    size_t start_pos = 0;
    std::string from = "Kreog!";
    std::string to = "1337!";

    while((start_pos = fever.find(from, start_pos)) != std::string::npos) {
        fever.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    std::cout << "Mr." << name << ": " << fever << std::endl;
}

std::string SickKoala::getName()
{
    return(name);
}
