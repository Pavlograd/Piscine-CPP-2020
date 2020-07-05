/*
** EPITECH PROJECT, 2020
** System
** File description:
** System
*/

#include "System.hpp"

System::System()
{
    struct utsname sysinfo;

    uname(&sysinfo);
    _name = sysinfo.sysname;
    _version = sysinfo.release;
}

System::~System()
{
}

const std::string System::getName() const
{
    return _name;
}

const std::string System::getVersion() const
{
    return _version;
}