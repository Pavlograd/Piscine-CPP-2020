/*
** EPITECH PROJECT, 2020
** KoalaDoctorList
** File description:
** KoalaDoctorList
*/

#include "KoalaDoctorList.hpp"
#include <iostream>

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *koala)
{
    m_koala = koala;
    next = NULL;
}

KoalaDoctorList::~KoalaDoctorList()
{
}

bool KoalaDoctorList::isEnd()
{
    if (next == NULL)
        return true;
    return false;
}

void KoalaDoctorList::append(KoalaDoctorList *newNode)
{
    if (next == NULL)
        next = newNode;
    else
        next->append(newNode);   
}

KoalaDoctor *KoalaDoctorList::getFromName(std::string koalaName)
{
    KoalaDoctorList *tmp = next;

    if ((m_koala->getName().compare(koalaName)) == 0)
		return m_koala;
    while (tmp != NULL) {
        if ((tmp->m_koala->getName().compare(koalaName)) == 0)
            return tmp->m_koala;
        tmp = tmp->next;
    }
	return NULL;
    
}

KoalaDoctorList *KoalaDoctorList::remove(KoalaDoctorList *toRemove)
{
    KoalaDoctorList *tmp = next;
    KoalaDoctorList *ptr = NULL;

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

KoalaDoctorList *KoalaDoctorList::removeFromName(std::string koalaName)
{
    KoalaDoctorList *tmp = next;
    KoalaDoctorList *ptr = NULL;

    if ((m_koala->getName().compare(koalaName) == 0)) {
        ptr = next;
        next = NULL;
        return ptr;
    }
    while (tmp != NULL) {
        if ((tmp->m_koala->getName().compare(koalaName)) == 0) {
            ptr = tmp->next;
            tmp->next = NULL;
            return ptr;
        }
        tmp = tmp->next;
    }
    return NULL;
}

void KoalaDoctorList::dump()
{
    KoalaDoctorList *tmp = this;

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

