/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "EventManager.hpp"
#include <cstdlib>
#include <iostream>

static std::list<Event> createTodoList()
{
    std::list<Event> todo;
    todo.push_front(Event(19, "The  vengeance  of the  Koala"));
    todo.push_front(Event(20, "The  return  of the  vengeance  of the  Koala"));
    todo.push_front(Event(21, "The  come  back of the  vengeance  of the  Koala"));
    todo.push_front(Event(22, "The  sequel  to the  vengeance."));
    todo.push_front(Event(9, "What  the  hell do you  mean'this  morning'?!"));
    todo.push_front(Event(1, "No , no , you're  pushing  it now ..."));
    return todo;
}

static int populateEvents(EventManager &em)
{
    em.addEvent(Event(10, "Eat"));
    em.addEvent(Event(12, "Finish  the  exercises"));
    em.addEvent(Event(12, "Understand  the  thing"));
    em.addEvent(Event(15, "Set  the  rights"));
    em.addEvent(Event(8, "Ask  what  the  hell a const_iterator  is"));
    em.addEvent(Event(11, "Wash my  hands so that my  keyboard  doesn't smell  likekebab"));
    return 0;
}

int main()
{
    EventManager em;
    populateEvents(em);

    em.dumpEvents();
    std::cout << "=====" << std::endl; //  Following a massive  rotten  leaves  of  eucalyptus  ingestion , all  theexercises  of the day are  canceled
    em.removeEventsAt(12);
    em.dumpEvents();
    std::cout << "=====" << std::endl; // Hey , the  time is  flying!
    em.addTime(10);
    std::cout << "=====" << std::endl;
    em.dumpEvents();
    std::cout << "=====" << std::endl; //  Following  the  aforementioned  ingestion  and to help  you  improve  your  skilllevel , an  exercises  serie  will be  added.
    std::list<Event> listEvent = createTodoList();
    em.addEventList(listEvent);
    em.dumpEvents();
    std::cout << "=====" << std::endl; // I forgot  something , but  what??
    em.dumpEventAt(15);
    std::cout << "=====" << std::endl; // And we  finish  the  day  with  joy  and  good  humour
    em.addTime(14);
    return 0;
}