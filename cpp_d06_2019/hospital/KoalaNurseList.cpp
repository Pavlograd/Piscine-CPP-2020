/*
** EPITECH PROJECT, 2020
** KoalaNurseList
** File description:
** KoalaNurseList
*/

#include "KoalaNurseList.hpp"
#include <iostream>

KoalaNurseList::KoalaNurseList(KoalaNurse *koala)
{
    m_koala = koala;
    next = NULL;
}

KoalaNurseList::~KoalaNurseList()
{
}

bool KoalaNurseList::isEnd()
{
    if (next == NULL)
        return true;
    return false;
}

void KoalaNurseList::append(KoalaNurseList *newNode)
{
    if (next == NULL)
        next = newNode;
    else
        next->append(newNode);   
}

KoalaNurse *KoalaNurseList::getFromID(int koalaName)
{
    KoalaNurseList *tmp = next;

    if (m_koala->getID() == koalaName)
		return m_koala;
    while (tmp != NULL) {
        if (tmp->m_koala->getID() == koalaName)
            return tmp->m_koala;
        tmp = tmp->next;
    }
	return NULL;
    
}

KoalaNurseList *KoalaNurseList::remove(KoalaNurseList *toRemove)
{
    KoalaNurseList *tmp = next;
    KoalaNurseList *ptr = NULL;

    if (this == toRemove) {
        ptr = next;
        next = NULL;
        return ptr;
    }
    while (tmp != NULL) {
        if (tmp == toRemove) {
            ptr = tmp->next;
            tmp->next = NULL;
            return ptr;
        }
        tmp = tmp->next;
    }
    return NULL;
}

KoalaNurseList *KoalaNurseList::removeFromID(int koalaName)
{
    KoalaNurseList *tmp = next;
    KoalaNurseList *ptr = NULL;

    if (m_koala->getID() == koalaName) {
        ptr = next;
        next = NULL;
        return ptr;
    }
    while (tmp != NULL) {
        if (tmp->m_koala->getID() == koalaName) {
            ptr = tmp->next;
            tmp->next = NULL;
            return ptr;
        }
        tmp = tmp->next;
    }
    return NULL;
}

void KoalaNurseList::dump()
{
    KoalaNurseList *tmp = this;

    std::cout << "Patients: ";
    while (tmp != NULL) {
        std::cout << tmp->m_koala->getID();
        tmp = tmp->next;
        if (tmp != NULL)
            std::cout << ", ";
        else
            std::cout << "." << std::endl;    
    }
}

