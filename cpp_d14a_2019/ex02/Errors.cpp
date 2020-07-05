/*
** EPITECH PROJECT, 2020
** Errors
** File description:
** Errors
*/

#include "Errors.hpp"

CommunicationError::CommunicationError(std::string const &message, std::string const &component) noexcept
{
    _message = message;
    _component = component;
}

CommunicationError::~CommunicationError()
{
}

const char *CommunicationError::what() const noexcept
{
    return const_cast<char *>(_message.c_str());
}

const std::string &CommunicationError::getComponent() const
{
    return _component;
}

const std::string &CommunicationError::getMessage() const
{
    return _message;
}