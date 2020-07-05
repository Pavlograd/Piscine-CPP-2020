/*
** EPITECH PROJECT, 2020
** EventManager
** File description:
** EventManager
*/

#include "EventManager.hpp"

EventManager::EventManager()
{
}

EventManager::~EventManager()
{
}

EventManager::EventManager(EventManager const &other)
{
    _events = other._events;
}

EventManager &EventManager::operator=(EventManager const &rhs)
{
    _events = rhs._events;

    return *this;
}

void EventManager::addEvent(const Event &e)
{
    int i = 0;

    if (e.getTime() <= currentTime)
        return;
    for (std::list<Event>::iterator it = _events.begin(); it != _events.end(); ++it, i++) {
        Event tmp_event = *it;
        if (tmp_event.getTime() > e.getTime()) {
            _events.insert(it, e);
            return;
        }
    }
    _events.push_back(e);
}

void EventManager::removeEventsAt(unsigned int time)
{
    for (std::list<Event>::iterator it = _events.begin(); it != _events.end(); ++it) {
        Event tmp_event = *it;
        if (tmp_event.getTime() == time) {
            _events.erase(it);
            removeEventsAt(time);
            break;
        }
    }
}

void EventManager::dumpEvents() const
{
    std::list<Event> tmp = _events;

    for (std::list<Event>::iterator it = tmp.begin(); it != tmp.end(); ++it) {
        Event tmp_event = *it;
        std::cout << tmp_event.getTime() << ": " << tmp_event.getEvent() << std::endl;
    }
}

void EventManager::dumpEventAt(unsigned int time) const
{
    std::list<Event> tmp = _events;

    for (std::list<Event>::iterator it = tmp.begin(); it != tmp.end(); ++it) {
        Event tmp_event = *it;
        if (tmp_event.getTime() == time)
            std::cout << tmp_event.getTime() << ": " << tmp_event.getEvent() << std::endl;
    }
}

void EventManager::addTime(unsigned int time)
{
    currentTime += time;
    for (std::list<Event>::iterator it = _events.begin(); it != _events.end(); ++it) {
        Event tmp_event = *it;
        if (tmp_event.getTime() <= currentTime) {
            std::cout << tmp_event.getEvent() << std::endl;
            _events.erase(it);
            currentTime -= time;
            addTime(time);
            break;
        }
    }
}

void EventManager::addEventList(std::list<Event> &events)
{
    std::list<Event> tmp = events;

    for (std::list<Event>::iterator it = tmp.begin(); it != tmp.end(); ++it) {
        Event tmp_event = *it;
        addEvent(tmp_event);
    }
    return;
}