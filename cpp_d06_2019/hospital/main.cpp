/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <iostream>
#include "SickKoala.hpp"
#include "KoalaNurse.hpp"
#include "KoalaDoctor.hpp"
#include "SickKoalaList.hpp"

int main()
{
    SickKoala Koaloa("Bite");
    KoalaNurse Nurse(12);
    KoalaDoctor Doctor("Boby");
    SickKoalaList list(&Koaloa);

    srandom(time(NULL));
    Doctor.diagnose(&Koaloa);
    Nurse.readReport("Bite.report");
    list.isEnd();
    list.getFromName(Koaloa.getName());
}