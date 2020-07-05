/*
** EPITECH PROJECT, 2020
** project.c
** File description:
** project
*/

#ifndef DELIVERY_UPTIME_HPP
#define DELIVERY_UPTIME_HPP

#include <iostream>
#include <chrono>
#include <ctime>
#include <fstream>

class UpTime
{
    public:
        UpTime();
        ~UpTime();
        std::string getUpTime();

    private:
        std::string _upTime;
};

#endif //DELIVERY_UPTIME_HPP
