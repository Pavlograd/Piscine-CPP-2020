/*
** EPITECH PROJECT, 2020
** SickKoalaList
** File description:
** SickKoalaList
*/

#include "SickKoalaList.hpp"
#include <iostream>

SickKoalaList::SickKoalaList(SickKoala *koala)
{
    m_koala = koala;
    next = NULL;
}

SickKoalaList::~SickKoalaList()
{
}

bool SickKoalaList::isEnd()
{
    if (next == NULL)
        return true;
    return false;
}

void SickKoalaList::append(SickKoalaList *newNode)
{
    if (next == NULL)
        next = newNode;
    else
        next->append(newNode);   
}

SickKoala *SickKoalaList::getFromName(std::string koalaName)
{
    SickKoalaList *tmp = next;

    if ((m_koala->getName().compare(koalaName)) == 0)
		return m_koala;
    while (tmp != NULL) {
        if ((tmp->m_koala->getName().compare(koalaName)) == 0)
            return tmp->m_koala;
        tmp = tmp->next;
    }
	return NULL;
    
}

SickKoalaList *SickKoalaList::remove(SickKoalaList *toRemove)
{
    SickKoalaList *tmp = next;
    SickKoalaList *ptr = nullptr;

    if (this == toRemove) {
        ptr = next;
        next = nullptr;
        return ptr;
    }
    while (tmp != nullptr) {
        if (tmp == toRemove) {
            ptr = tmp->next;
            tmp->next = nullptr;
            return ptr;
        }
        tmp = tmp->next;
    }
    return nullptr;
}

SickKoalaList *SickKoalaList::removeFromName(std::string koalaName)
{
    SickKoalaList *tmp = next;
    SickKoalaList *ptr = nullptr;

    if ((m_koala->getName().compare(koalaName) == 0)) {
        ptr = next;
        next = nullptr;
        return ptr;
    }
    while (tmp != nullptr) {
        if ((tmp->m_koala->getName().compare(koalaName)) == 0) {
            ptr = tmp->next;
            tmp->next = nullptr;
            return ptr;
        }
        tmp = tmp->next;
    }
    return nullptr;
}

SickKoala *SickKoalaList::getContent()
{
    return (m_koala);
}

SickKoalaList *SickKoalaList::getNext()
{
    if (next != NULL)
        return next;
    return nullptr;
}

void SickKoalaList::dump()
{
    SickKoalaList *tmp = this;

    std::cout << "Patients: ";
    while (tmp != NULL) {
        std::cout << tmp->m_koala->getName();
        tmp = tmp->next;
        if (tmp != NULL)
            std::cout << ", ";
        else
            std::cout << "." << std::endl;    
    }
}

