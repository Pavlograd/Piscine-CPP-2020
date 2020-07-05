/*
** EPITECH PROJECT, 2020
** EventManager
** File description:
** EventManager
*/

#ifndef EventManager_
#define EventManager_

#include "Event.hpp"
#include <iostream>
#include <list>
#include <vector>

class EventManager
{
public:
    EventManager();
    ~EventManager();
    EventManager(EventManager const &other);
    EventManager &operator=(EventManager const &rhs);
    void addEvent(const Event &e);
    void removeEventsAt(unsigned int time);
    void dumpEvents() const;
    void dumpEventAt(unsigned int time) const;
    void addTime(unsigned int time);
    void addEventList(std::list<Event> &events);
protected:
private:
    std::list <Event> _events;
    unsigned int currentTime = 0;
};

#endif /* !EventManager_ */