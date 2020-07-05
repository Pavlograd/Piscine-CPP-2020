/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#include "Object.hpp"

Object::Object(std::string const &name, std::string const &type)
    : _name(name), _type(type)
{
}

Object::~Object(void)
{
}

const std::string &Object::getType() const
{
    return (_type);
}

const std::string &Object::getName() const
{
    return (_name);
}

std::ostream &operator<<(std::ostream &os, const Object &obj)
{
      os << "I am " << obj.getName() << " the " << obj.getType() << "" << std::endl;
      return os;
}