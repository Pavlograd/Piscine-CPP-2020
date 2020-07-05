/*
** EPITECH PROJECT, 2020
** Event
** File description:
** Event
*/

#include "Event.hpp"

Event::Event()
{
}

Event::~Event()
{
}

Event::Event(unsigned int time, const std::string &event)
{
    _time = time;
    _event = event;
}

Event::Event(const Event &other)
{
    _time = other._time;
    _event = other._event;
}

Event &Event::operator=(const Event &rhs)
{
    _time = rhs._time;
    _event = rhs._event;

    return *this;
}

unsigned int Event::getTime() const
{
    return _time;
}

const std::string &Event::getEvent() const
{
    return _event;
}

void Event::setTime(unsigned int time)
{
    _time = time;
}

void Event::setEvent(const std::string &event)
{
    _event = event;
}