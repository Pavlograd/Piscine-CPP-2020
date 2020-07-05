/*
** EPITECH PROJECT, 2020
** user
** File description:
** user
*/

#include "User.hpp"

User::User()
{
    _username = std::getenv("USER");
    if (std::getenv("USER") == NULL) {
        _username = "ERROR NO USERNAME";
    } else
        _username = std::getenv("USERNAME");

    if (std::getenv("HOSTNAME") == NULL) {
        _hostname = "ERROR NO HOSTNAME";
    } else
        _hostname = std::getenv("HOSTNAME");
}

User::~User()
{
}

const std::string &User::getUsername() const
{
    return _username;
}

const std::string &User::getHostname() const
{
    return _hostname;
}