/*
** EPITECH PROJECT, 2020
** DomesticKoala
** File description:
** DomesticKoala
*/

#ifndef DomesticKoala_
#define DomesticKoala_

#include "KoalaAction.hpp"
#include <vector>
#include <iostream>
#include <string>

class DomesticKoala
{
public:
    DomesticKoala(KoalaAction &);
    ~DomesticKoala();
    DomesticKoala(const DomesticKoala &);
    typedef void (KoalaAction::*methodPointer_t)(const std::string &);
    DomesticKoala &operator=(const DomesticKoala &);
    const std::vector<methodPointer_t> *getActions() const;
    void learnAction(unsigned char command, methodPointer_t action);
    void unlearnAction(unsigned char command);
    void doAction(unsigned char command, const std::string &param);
    void setKoalaAction(KoalaAction &);
protected:
private:
    KoalaAction _action;
    std::vector<methodPointer_t> _actions;
};

#endif /* !DomesticKoala_ */