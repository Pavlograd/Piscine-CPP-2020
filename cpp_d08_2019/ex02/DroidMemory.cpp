/*
** EPITECH PROJECT, 2020
** DroidMemory
** File description:
** DroidMemory
*/

#include "DroidMemory.hpp"
#include <string>
#include <iostream>


DroidMemory::DroidMemory()
{
    Fingerprint = random();
}

DroidMemory::~DroidMemory()
{
}

size_t DroidMemory::getFingerprint()
{
    return Fingerprint;
}

size_t DroidMemory::getExp()
{
    return Exp;
}

void DroidMemory::setFingerprint(size_t _fingerprint)
{
    Fingerprint = _fingerprint;
}

void DroidMemory::setExp(size_t _exp)
{
    Exp = _exp;
}

void DroidMemory::operator<<(DroidMemory &mem)
{
    setExp(Exp + mem.getExp());

    Fingerprint ^= mem.getFingerprint();
}

void DroidMemory::operator>>(DroidMemory &mem)
{
    mem.setExp(mem.getExp() + Exp);

    mem.Fingerprint ^= Fingerprint;
}

void DroidMemory::operator+=(size_t size)
{
    Exp += size;

    Fingerprint ^= size;
}

void DroidMemory::operator+=(DroidMemory &mem)
{
    operator<<(mem);
}

DroidMemory DroidMemory::operator+(DroidMemory mem)
{
    DroidMemory result;

    result.setExp(mem.getExp());
    result.setFingerprint(mem.getFingerprint());

    operator+=(result);
    return result;
}

DroidMemory DroidMemory::operator=(DroidMemory &mem)
{
    mem.setExp(getExp());
    mem.setFingerprint(getFingerprint());
}

bool DroidMemory::operator==(DroidMemory &droid)
{
    if (getExp() == droid.getExp() && getFingerprint() == droid.getFingerprint())
        return true;
    return false;
}

bool DroidMemory::operator!=(DroidMemory &droid)
{
    if (getExp() == droid.getExp() && getFingerprint() == droid.getFingerprint())
        return false;
    return true;
}

bool DroidMemory::operator<(DroidMemory &droid)
{
    if (getExp() < droid.getExp())
        return true;
    return false;
}

bool DroidMemory::operator>(DroidMemory &droid)
{
    if (getExp() > droid.getExp())
        return true;
    return false;
}

bool DroidMemory::operator<=(DroidMemory &droid)
{
    if (getExp() <= droid.getExp())
        return true;
    return false;
}

bool DroidMemory::operator>=(DroidMemory &droid)
{
    if (getExp() >= droid.getExp())
        return true;
    return false;
}

bool DroidMemory::operator<(size_t exp)
{
    if (getExp() < exp)
        return true;
    return false;
}

bool DroidMemory::operator>(size_t exp)
{
    if (getExp() > exp)
        return true;
    return false;
}

bool DroidMemory::operator<=(size_t exp)
{
    if (getExp() <= exp)
        return true;
    return false;
}

bool DroidMemory::operator>=(size_t exp)
{
    if (getExp() >= exp)
        return true;
    return false;
}

std::ostream &operator<<(std::ostream &os, DroidMemory &obj)
{
      os << "DroidMemory '" << obj.getFingerprint() << "', " << obj.getExp();
      return os;
}