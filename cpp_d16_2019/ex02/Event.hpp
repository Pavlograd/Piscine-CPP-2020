/*
** EPITECH PROJECT, 2020
** Event
** File description:
** Event
*/

#ifndef Event_
#define Event_

#include <iostream>

class Event
{
public:
    Event();
    Event(unsigned int time, const std::string &event);
    ~Event();
    Event(const Event &other);
    Event &operator=(const Event &rhs);
    unsigned int getTime() const;
    const std::string &getEvent() const;
    void setTime(unsigned int time);
    void setEvent(const std::string &event);

protected:
private:
    unsigned int _time = 0;
    std::string _event = "";
};

#endif /* !Event_ */