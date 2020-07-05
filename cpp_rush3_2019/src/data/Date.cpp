/*
** EPITECH PROJECT, 2020
** Date
** File description:
** Date
*/

#include "Date.hpp"

Date::Date()
{
}

Date::~Date()
{
}

void Date::formatDate()
{
    time_t now = std::time(0);
    tm *ltm = localtime(&now);

    _date = std::to_string(1900 + ltm->tm_year) + ":";
    if (ltm->tm_mon + 1 < 10)
        _date.append("0" + std::to_string(ltm->tm_mon + 1) + ":");
    else
        _date.append(std::to_string(ltm->tm_mon + 1) + ":");
    if (ltm->tm_mday < 10)
        _date.append("0" + std::to_string(ltm->tm_mday));
    else
        _date.append(std::to_string(ltm->tm_mday));
    _time = std::to_string(ltm->tm_hour) + ":";
    if (ltm->tm_min < 10)
        _time.append("0" + std::to_string(ltm->tm_min) + ":");
    else
        _time.append(std::to_string(ltm->tm_min) + ":");
    if (ltm->tm_sec < 10)
        _time.append("0" + std::to_string(ltm->tm_sec));
    else
        _time.append(std::to_string(ltm->tm_sec));
}

const std::string &Date::getDate()
{
    formatDate();
    return _date;
}

const std::string &Date::getTime()
{
    formatDate();
    return _time;
}