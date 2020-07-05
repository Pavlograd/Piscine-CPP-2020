/*
** EPITECH PROJECT, 2020
** Errors
** File description:
** Errors
*/

#include "Errors.hpp"

NasaError::NasaError(std::string const &message, std::string const &component) noexcept
{
    _message = message;
    _component = component;
}

NasaError::~NasaError()
{
}

std::string const &NasaError::getComponent() const
{
    return _component;   
}

const char *NasaError::what() const noexcept
{
    return const_cast<char*>(_message.c_str());
}

MissionCriticalError::MissionCriticalError(std::string const &message,
                                           std::string const &component) : NasaError(message, component)
{
}

MissionCriticalError::~MissionCriticalError()
{
}

LifeCriticalError::LifeCriticalError(std::string const &message,
                                     std::string const &component) : NasaError(message, component)
{
}

LifeCriticalError::~LifeCriticalError()
{
}

UserError::UserError(std::string const &message,
                     std::string const &component) : NasaError(message, component)
{
}

UserError::~UserError()
{
}

CommunicationError::CommunicationError(std::string const &message) : NasaError(message, "CommunicationDevice")
{
}

CommunicationError::~CommunicationError()
{
}