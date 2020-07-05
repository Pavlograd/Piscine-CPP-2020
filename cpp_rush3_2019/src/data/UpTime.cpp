/*
** EPITECH PROJECT, 2020
** project.c
** File description:
** project
*/

#include "UpTime.hpp"

UpTime::UpTime()
{
    _upTime = getUpTime();
}

UpTime::~UpTime()
{
}

std::string UpTime::getUpTime()
{
    std::chrono::milliseconds uptime(0u);
    time_t uptime_seconds = 0;
    time_t time;
    std::string buffer;
    tm *ltm;

    if(std::ifstream("/proc/uptime", std::ios::in) >> uptime_seconds) {
        uptime = std::chrono::milliseconds( static_cast<unsigned long long>(uptime_seconds) * 1000ULL);
        time = uptime_seconds;
        ltm = localtime(&time);
        buffer = std::to_string(ltm->tm_mday - 1) + " Day(s) " +
            std::to_string(ltm->tm_hour - 1) + ":" +
            std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec);
        _upTime = buffer;
        return (buffer);
    }
    _upTime = "";
    return ("");
}