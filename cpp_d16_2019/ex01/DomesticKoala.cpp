/*
** EPITECH PROJECT, 2020
** DomesticKoala
** File description:
** DomesticKoala
*/

#include "DomesticKoala.hpp"

DomesticKoala::DomesticKoala(KoalaAction &Koala)
{
    _action = Koala;
    _actions.resize(100);
}

DomesticKoala::~DomesticKoala()
{
}

DomesticKoala::DomesticKoala(const DomesticKoala &Koala)
{
    _action = Koala._action;
    _actions = Koala._actions;
}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &Koala)
{
    _action = Koala._action;
    _actions = Koala._actions;

    return *this;
}

const std::vector<DomesticKoala::methodPointer_t> *DomesticKoala::getActions() const
{
    return &_actions;
}

void DomesticKoala::learnAction(unsigned char command, methodPointer_t action)
{
    _actions[command] = action;
}

void DomesticKoala::unlearnAction(unsigned char command)
{
    _actions[command] = NULL;
}

void DomesticKoala::doAction(unsigned char command, const std::string &param)
{
    if (_actions[command] != NULL)
        (_action.*_actions[command])(param);
}

void DomesticKoala::setKoalaAction(KoalaAction &Koala)
{
    _action = Koala;
}